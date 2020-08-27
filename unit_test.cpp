#include "gtest/gtest.h"
#include "menu_test.cpp"
#include "menu.hpp"
#include "storage.hpp"
#include "event.hpp"
#include "term.hpp"
#include "menu.cpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
