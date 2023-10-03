#include <gtest/gtest.h>
#include "PID.hpp"



TEST(dummy_test, this_should_pass) {
  EXPECT_EQ(1, 1);
}

TEST(dummy_test, this_should_pass_too) {
  EXPECT_EQ(PID(1, 1, 1, 1, 1, 1), 3);
}

TEST(dummy_test, this_will_fail) {
  EXPECT_EQ(my_function2(3.2), 3.2);
}
