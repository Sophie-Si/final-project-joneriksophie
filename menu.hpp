#ifndef MENU_HPP
#define MENU_HPP


class Menu {
private:
    Term* root;



public:
    // Constructor
    Menu();

    void PrintMenu();
    void AddObject(Event* event);
    void RemoveObject(Event* event);
    void EditObject(Event* event);
    bool SearchObject(Event* event);
    void PrintTodayEvent();
    void exist(Event* event);
};

#endif
