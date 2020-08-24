#include "menu.hpp"
#include <string>
#include <iostream>

Menu::Menu() {
    root = new Term("AllTime");
    storage* CurrYear = new term("year2020");
    storage* January = new term("January");
    storage* February = new term("February");
    storage* March = new term("March");
    storage* April = new term("April");
    storage* May = new term("May");
    storage* June = new term("June");
    storage* July = new term ("July");
    storage* August = new term("August");
    storage* September = new term("September");
    storage* October = new term("October");
    storage* November = new term("November");
    storage* December = new term("December");

    root->vect.push_back(CurrYear);

    CurrYear->vect.push_back(January);
    CurrYear->vect.push_back(February);
    CurrYear->vect.push_back(March);
    CurrYear->vect.push_back(April);
    CurrYear->vect.push_back(May);
    CurrYear->vect.push_back(June);
    CurrYear->vect.push_back(July);
    CurrYear->vect.push_back(August);
    CurrYear->vect.push_back(September);
    CurrYear->vect.push_back(October);
    CurrYear->vect.push_back(November);
    CurrYear->vect.push_back(December);
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
	
	storage* eventObj = new event(eventName, dayNum, monthNum, yearNum);
	AddObject(eventObj);
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
    else {
	std::cout << "Invalid input. Try again." << std::endl;
	PrintMenu();
    }
    
    //cout << endl;
}

void Menu::AddObject(event) {
    /*if (event->month == 1) { // 1 = January
	CurrYear->vect.at(0)->vect.push_back(event);
    }*/

    int val = event->getMonth();

    CurrYear->vect.at(val - 1)->vect.push_back(event);

    PrintMenu(); 
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
