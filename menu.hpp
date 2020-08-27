#ifndef MENU_HPP
#define MENU_HPP

#include "term.hpp"
#include "storage.hpp"
#include "event.hpp"
#include <string>
#include <vector>
#include <iostream>

class Menu {
private:
    term* root;



public:
    // Constructor
    Menu();

    void PrintMenu();
    void AddObject(storage* eventObj);
    void RemoveObject(string nameEvent, string wordMonth, string wordYear);
    void EditObject(storage* eventObj);
    void PrintEvent(storage* eventObj);
    bool exist(string nameEvent, string wordMonth, string wordYear);
    term* getRoot() {
	return root;
    }
};

#endif
