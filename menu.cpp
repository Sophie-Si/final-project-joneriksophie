#include "menu.hpp"
#include <string>

Menu::Menu() {
    root = new Term("AllTime");
    Term* CurrYear = new Term("year2020");
    Term* January = new Term("January");
    
}

void Menu::PrintMenu() {
    string input;
    cout << "Menu: " << endl
    cout << "a) Add event" << endl;
    cout << "b) Remove event" << endl;
    cout << "c) Edit event" << endl;
    cout << "d) Search for event" << endl;
    cout << "e) Print today's event" << endl;
    cout << "q) Quit" << endl;
    cout << "Enter option: " << endl;

    cin >> input;
    cout << endl;

    if (input == "a" || input == "A") {
	std::string eventName;
	int yearNum;
	int monthNum;
	int dayNum;

	std::cout << "Enter event name: " << std::endl;
	std::getline(cin, eventName);
	std::cout << std::endl;
	std::cout << "Enter date year: " << std::endl;
	std::cin >> yearNum;
	std::cout << std::endl;
	std::cout << "Enter date month: " <<std::endl;
	std::cin >> monthNum << std::endl;
	std::cout << std::endl;
	std::cout << "Enter date day: " << std::endl;
	std::cin >> dayNum;
	std::cout << std::endl;
	
	AddObject(new Event());
    }
    else if (input == "b" || input == "B") {
	// RemoveObject(event)
    } 
    else if (input == "c" || input ==  "C") {
	// EditObject(event)
    }
    else if (input == "d" || input == "D") {
	// SearchObject(event)
	// use exist function instead of search
    }
    else if (input == "e" || input == "E") {
	// PrintTodayEvent()
    }
    else if (input == "q" || input == "Q") {
	exit (1):
    }
    
    cout << endl;
}

void Menu::AddObject(event) {
    if (event->month == "January") {
	//AllTime->January->EventsList.push_back(event);
    }

    // ->PrintMenu(); 
}

void Menu::RemoveObject(event) {


    // ->PrintMenu();
}

void Menu::EditObject(event) {


    // ->PrintMenu();
}

bool Menu::SearchObject(event) {


    // ->PrintMenu();
}

void Menu::PrintTodayEvent() {


    // ->PrintMenu();
}

bool Menu::exist(event) {
//check if event exists in list
}
