#include "menu.hpp"
#include <string>

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
	// AddObject(new Event())
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
