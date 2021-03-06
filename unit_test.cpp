#include "gtest/gtest.h"

#include "latex_visitor_test.hpp"
#include "childTesting.hpp"
#include "op_test.hpp"
#include "add_test.hpp"
#include "sub_test.hpp"
#include "mult_test.hpp"
#include "div_test.hpp"
#include "pow_test.hpp"
#include "ENathanLe_tests.hpp"
#include "toothnnail_tests.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
