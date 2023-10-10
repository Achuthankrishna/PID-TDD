/**
 * @file test.cpp
 * @author Jerry Pittman, Jr. (jpittma1@umd.edu)
 * @brief Unit Test for PID Controller
 * @version 0.2
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <gtest/gtest.h>
#include <math.h>
#include "../include/PID.hpp"
#include "PID.hpp"

/**
 * @brief PID Object for unit tests
 * 
 */
PID test(0.1,0.5, 0.01, 0.1, 0.0, 10.0);

/**
 * @brief Construct a new TEST object to test computePID Method
 * 
 */
TEST(PID_test, test_computePID) {
  EXPECT_NEAR(test.computePID(0.1,0.5), 10.0, 0.01);
}

/**
 * @brief Construct a new TEST object to test returnPID Method
 * 
 */
TEST(PID_test, test_output){
  EXPECT_NEAR(test.returnPID(0.1,0.5), 0.1, 0.001);
}
/**
 * @brief PID Object for unit tests
 * 
 */
PID test1(0.1,0.5, 0.01, 0.1, 1.0, 81.0);

/**
 * @brief Construct a new TEST object to test computePID Method
 * 
 */
TEST(PID_test, test_compute){
  ASSERT_GT(test1.computePID(0.1,0.5), 5);
}
