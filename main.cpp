#include <iostream>
#include <string>
#include "menu.hpp"
#include "storage.hpp"
#include "event.hpp"
#include "term.hpp"

using namespace std;

int main() {
    Menu* calendar = new Menu();
    calendar->PrintMenu();


    return 0;
}
