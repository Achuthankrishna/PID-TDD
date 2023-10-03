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


TEST(dummy_test, this_should_pass) {
  EXPECT_EQ(PID(1, 1, 1, 1, 1, 1), 3);
}