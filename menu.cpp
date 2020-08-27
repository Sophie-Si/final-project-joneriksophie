#include "menu.hpp"
#include "storage.hpp"
#include "event.hpp"
#include "term.hpp"
#include <string>
#include <iostream>
#include <vector>
#include "printer.hpp"
#include "simple_printer.hpp"
#include "md_file_printer.hpp"

Menu::Menu() {
    root = new term("AllTime", 0, 0, 0);
}

void Menu::PrintMenu() {
    std::string input;
    std::cout << "Menu: " << std::endl;
    std::cout << "a) Add event" << std::endl;
    std::cout << "b) Remove event" << std::endl;
    std::cout << "c) Edit event" << std::endl;
    std::cout << "d) Print event" << std::endl;
    std::cout << "q) Quit" << std::endl;
    std::cout << "Enter option: " << std::endl;

    std::cin >> input;
    std::cout << std::endl;
        
    if (input == "a" || input == "A") {
        std::string eventName;
        int yearNum;
        int monthNum;
        int dayNum;

        std::cout << "Enter event name: " << std::endl;
        std::cin.ignore();
        std::getline(std::cin, eventName);
        std::cout << std::endl;
        std::cout << "Enter date year: " << std::endl;
        std::cin >> yearNum;
        std::cout << std::endl;
        std::cout << "Enter date month: " <<std::endl;
        std::cin >> monthNum;
        std::cout << std::endl;
        std::cout << "Enter date day: " << std::endl;
        std::cin >> dayNum;
        std::cout << std::endl;

        AddObject(new event(eventName, dayNum, monthNum, yearNum));
        PrintMenu();
    }
    else if (input == "b" || input == "B") {
        std::string nameEvent;
        std::string wordYear, wordMonth;

        std::cout << "Enter the name of the event you would like to remove: " << std::endl;
        std::cin.ignore();
        std::getline(std::cin, nameEvent);
        std::cout << "Enter the year this event is happening(in number form): " << std::endl;
        std::cin >> wordYear;
        std::cout << std::endl;
        std::cout << "Enter the month this event is happening(in word form): " << std::endl;
        std::cin >> wordMonth;
        std::cout << std::endl;

        if (exist(nameEvent, wordMonth, wordYear)) {
            RemoveObject(nameEvent, wordMonth, wordYear);
        }
        else {
            std::cout << "Event could not be found" << std::endl;
        }

        PrintMenu();
    }
    // else if (input == "c" || input ==  "C") {
    //     //     // EditObject(event)
    //         // }
    else if (input == "d" || input == "D") {
        std::string option;
        std::cout << "Print options: " << std::endl;
        std::cout << "a) Print event" << std::endl;
        std::cout << "b) Print events for month" << std::endl;
        std::cout << "Enter option: " << std::endl;

        std::cin >> option;
        std::cout << std::endl;

        if (option == "a" || option == "A") {
            int yearNumber;
            std::string wordMonth, nameEvent;
            std::cout << "Enter year of event: " << std::endl;
            std::cin >> yearNumber;
            std::cout << std::endl;

            std::cout << "Enter month(capitalized first letter) of event: " << std::endl;
            std::cin >> wordMonth;
            std::cout << std::endl;

            std::cout << "Enter name of event: " << std::endl;
            std::cin.ignore();
            std::getline(cin, nameEvent);
            std::cout << std::endl;

            std::string wordYear = std::to_string(yearNumber);

            int num;
            num = root->search(wordYear);
            if (num == -1) {
                std::cout << "No events in this year." << std::endl;
                PrintMenu();
            }
            int num2;
            num2 = root->getVector().at(num)->search(wordMonth);
            if (num2 == -1) {
                std::cout << "No events in this month." << std::endl;
                PrintMenu();
            }
            int num3;
            num3 = root->getVector().at(num)->getVector().at(num2)->search(nameEvent);
            if (num3 == -1) {
                std::cout << "Even cannot be found." << std::endl;
                PrintMenu();
            }

            PrintEvent(root->getVector().at(num)->getVector().at(num2)->getVector().at(num3));
        }
        else if (option == "b" || option == "B") {
            int yearNumber;
            std::string wordMonth, nameEvent;
            std::cout << "Enter year of event: " << std::endl;
            std::cin >> yearNumber;
            std::cout << std::endl;

            std::cout << "Enter month(capitalized first letter) of event: " << std::endl;
            std::cin >> wordMonth;
            std::cout << std::endl;

            std::string wordYear = std::to_string(yearNumber);

            int num;
            num = root->search(wordYear);
            if (num == -1) {
                std::cout << "No events in this year." << std::endl;
                PrintMenu();
            }
            int num2;
            num2 = root->getVector().at(num)->search(wordMonth);
            if (num2 == -1) {
                std::cout << "No events in this month." << std::endl;
                PrintMenu();
            }

            PrintEvent(root->getVector().at(num)->getVector().at(num2));
        }
        PrintMenu();
    }
    else if (input == "q" || input == "Q") {
        exit (1);
    }
    else {
        std::cout << "Invalid input. Try again." << std::endl;
        PrintMenu();
    }
}

void Menu::AddObject(storage* eventObj) {
    int yearVal = eventObj->getYear();
    int monthVal = eventObj->getMonth();
    std::string yearWord, monthWord;
    int val, val2;

    yearWord = std::to_string(yearVal);

    if (monthVal == 1) {
        monthWord = "January";
    }
    else if (monthVal == 2) {
        monthWord = "February";
    }
    else if (monthVal == 3) {
        monthWord = "March";
    }
    else if (monthVal == 4) {
        monthWord = "April";
    }
    else if (monthVal == 5) {
        monthWord = "May";
    }
    else if (monthVal == 6) {
        monthWord = "June";
    }
    else if (monthVal == 7) {
        monthWord = "July";
    }
    else if (monthVal == 8) {
        monthWord = "August";
    }
    else if (monthVal == 9) {
        monthWord = "September";
    }
    else if (monthVal == 10) {
        monthWord = "October";
    } 
    else if (monthVal == 11) {
        monthWord = "November";
    } 
    else if (monthVal == 12) {
        monthWord = "December";
    }

    val = root->search(yearWord);
    if (val == -1) {
        root->dummyAdd(new term(yearWord, 0, 0, yearVal));
        val = root->search(yearWord); 
    }
    
    val2 = root->getVector().at(val)->search(monthWord);
    if (val2 ==-1) {
        root->getVector().at(val)->dummyAdd(new term(monthWord, 0, monthVal, 0));
        val2 = root->getVector().at(val)->search(monthWord);
    }

    root->getVector().at(val)->getVector().at(val2)->dummyAdd(eventObj);
}

void Menu::RemoveObject(string nameEvent, string wordMonth, string wordYear) {
    int val = root->search(wordYear);
    int val2 = root->getVector().at(val)->search(wordMonth);
    int val3 = root->getVector().at(val)->getVector().at(val2)->search(nameEvent);

    vector<storage*> v = root->getVector().at(val)->getVector().at(val2)->getVector();
    root->getVector().at(val)->getVector().at(val2)->getVector().erase(v.begin() + val3);
}
// void Menu::EditObject(storage* eventObj) {
//
// // }
void Menu::PrintEvent(storage* eventObj) {
    std::string option;
    std::cout << "Enter 'a' to print to terminal." << std::endl;
    std::cout << "Enter 'b' to print to external file." << std::endl;
    
    std::cin >> option;
    std::cout << endl;

    if (option == "a" || option == "A") {
        SimplePrinter printEvent;
        printEvent.print(eventObj);
    }
    else if (option == "b" || option == "B") {
	MdFilePrinter printer;
	printer.print(eventObj);
    }
}

bool Menu::exist(string nameEvent, string wordMonth, string wordYear) {
    int val = root->search(wordYear);
    if (val == -1) {
        return false;
    }

    int val2 = root->getVector().at(val)->search(wordMonth);
    if (val2 == -1) {
        return false;
    }

    int val3 = root->getVector().at(val)->getVector().at(val2)->search(nameEvent);
    if (val3 != -1) {
        return true;
    }
    return false;
}


void Menu::annualEventCreation(storage* EventA){
		int count =0;
		string input;
                bool valid = false;
                if(!valid){
                        cout << "how many years do you want to repeat this event? " <<endl;
                        cin >> input;
                        cout << endl;
                        if ((0  == stoi(input) && input == "0")|| stoi(input) !=  0){
                                valid = true;
                        }
                }

                for (int i = 1; i<input+1 ; ++i){
			AddObject(new event(EventA->getName(), EventA->getDay(), EventA->getMonth(), EventA->getYear()+i));
			
                }

}
