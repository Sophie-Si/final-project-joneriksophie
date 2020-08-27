#ifndef ___MENU_TEST_HPP___
#define ___MENU_TEST_HPP___

#include "gtest/gtest.h"
#include "menu.hpp"
#include "storage.hpp"
#include "event.hpp"
#include "term.hpp"

TEST (Menu, CheckRoot) {
    Menu* test = new Menu();
    EXPECT_EQ(test->getRoot()->getName(), "AllTime");
}

TEST (Menu, AddEvent) {
    Menu* test = new Menu();
    test->AddObject(new event("Event", 26, 8, 2020));
    EXPECT_EQ(test->getRoot()->getVector().at(0)->getVector().at(0)->getVector().at(0)->getName(), "Event");
}

TEST (Menu, AddYear) {
    Menu* test = new Menu();
    test->AddObject(new event("Event", 26, 8, 2020));
    test->AddObject(new event("Event 2", 3, 12, 2021));
    EXPECT_EQ(test->getRoot()->getNum(), 2);
    EXPECT_EQ(test->getRoot()->getVector().at(1)->getName(), "2021");
}

TEST (Menu, AddMonth) {
    Menu* test = new Menu();
    test->AddObject(new event("Event", 26, 8, 2020));
    test->AddObject(new event("Event 2", 12, 4, 2020));
    EXPECT_EQ(test->getRoot()->getVector().at(0)->getNum(), 2);
    EXPECT_EQ(test->getRoot()->getVector().at(0)->getVector().at(1)->getName(), "April");
}

#endif //___MENU_TEST_HPP___
