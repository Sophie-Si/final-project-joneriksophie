#include "menu.hpp"
#include "storage.hpp"
#include "event.hpp"
#include "term.hpp"
#include <string>
#include <iostream>
#include <vector>

Menu::Menu() {
    root = new term("AllTime", 0, 0, 0);
}
void Menu::PrintMenu() {
    std::string input;
    std::cout << "Menu: " << std::endl;
    std::cout << "a) Add event" << std::endl;
    std::cout << "b) Remove event" << std::endl;
    std::cout << "c) Edit event" << std::endl;
    std::cout << "d) Search for event" << std::endl;
    std::cout << "e) Print today's event" << std::endl;
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

        // storage* newEvent = new event(eventName, dayNum, monthNum, yearNum);
        // AddObject(newEvent);
        AddObject(new event(eventName, dayNum, monthNum, yearNum));
        PrintMenu();
    }
    else if (input == "b" || input == "B") {
        std::string nameEvent;
        std::string wordYear, wordMonth;

        std::cout << "Enter the name of the event you would like to remove: " << std::endl;
        std::getline(std::cin, nameEvent);
        std::cout << "Enter the year this event is happening(in number form): " << std::endl;
        std::cin >> wordyear;
        std::cout << std::endl;
        std::cout << "enter the month this event is happening(in word form): " << std::endl;
        std::cin >> wordmonth;
        std::cout << std::endl;

        if (exist(nameevent, wordmonth, wordyear)) {
            removeobject(nameevent, wordmonth, wordyear);
        }
        else {
            std::cout << "event could not be found" << std::endl;
        }

        printmenu();
    }
    //else if (input == "c" || input ==  "c") {
        //editobject(event)
    //}
    // else if (input == "d" || input == "d") {
    //  // searchobject(event)
    //  // use exist function instead of search
    //}
    // else if (input == "e" || input == "e") {
    //  // printtodayevent()    
    //}
    else if (input == "q" || input == "q") {
        exit (1);
    }
    else {
        std::cout << "invalid input. try again." << std::endl;
        printmenu();
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
        //root->getVector().push_back(new term(yearWord, 0, 0, yearVal));
         root->dummyAdd(new term(yearWord, 0, 0, yearVal));
         val = root->search(yearWord); 
     }
     std::cout << root->getNum() << std::endl; //check vector size 
     std::cout << val << std::endl; // check new object exists in vector
     std::cout << root->getVector().at(val)->getName() << std::endl; // check name of new object
   
    /*val2 = root->getVector().at(val)->search(monthWord);
    if (val2 == -1) {
        root->getVector().at(val)->getVector().push_back(new term(monthWord, 0, monthVal, 0));
        val2 = root->getVector().at(val)->search(monthWord);
    }

    root->getVector().at(val).getVector().at(val2).push_back(eventObj);*/
}

/*void Menu::RemoveObject(string nameEvent, string wordMonth, string wordYear) {
    int val = root->getVector()->search(wordYear);
    int val2 = root->getVector().at(val)->getVector()->search(wordMonth);
    int val3 = root->getVector().at(val)->getVector().at(val2)->getVector()->search(nameEvent);

    vector<storage*> v = root->getVector().at(val)->getVector().at(val2)->getVector();
    root->getVector().at(val)->getVector().at(val2)->getVector().erase(v.begin() + val3);
}*/

//void Menu::EditObject(storage* eventObj) {

//}

//bool Menu::SearchObject(storage* eventObj) {

//}

//void Menu::PrintTodayEvent() {

//}

/*bool Menu::exist(string nameEvent, string wordMonth, string wordYear) {
    int val = root->getVector()->search(wordYear);
    if (val == -1) {
        return false;
    }

    int val2 = root->getVector().at(val)->getVector()->search(wordMonth);
    if (val2 == -1) {
        return false;
    }

    int val3 = root->getVector().at(val)->getVector().at(val2)->getVector()->search(nameEvent);
    if (val3 != -1) {
        return true;
    }
    return false;
}*/
