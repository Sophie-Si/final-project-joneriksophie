#include <iostream>
#include <string>
#include "menu.hpp"
#include "storage.hpp"
#include "event.hpp"
#include "term.hpp"
#include "simple_printer.hpp"
#include "printer.hpp"
#include "menu.cpp"

using namespace std;

int main() {
    Menu* calendar = new Menu();
    calendar->PrintMenu();


    return 0;
}
