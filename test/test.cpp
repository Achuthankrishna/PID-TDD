/**
 * @file test.cpp
 * @author Jerry Pittman, Jr. (jpittma1@umd.edu)
 * @brief Unit Test for PID Controller
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <gtest/gtest.h>
#include "../include/PID.hpp"


TEST(dummy_test, this_should_fail) {
  PID test(1.0,1.0,1.0,1.0,1.0,1.0);
  EXPECT_EQ(test.returnPID(1.0, 1.0), 3.0);
}

TEST(dummy_test, this_should_fail_also) {
  PID test(1.0,1.0,1.0,1.0,1.0,1.0);
  EXPECT_EQ(test.computePID(1.0, 1.0), 2.0);
}