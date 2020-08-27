#include "gtest/gtest.h"
//#include "menu_test.hpp"
//#include "simple_printer_test.hpp"
#include "md_file_printer_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
