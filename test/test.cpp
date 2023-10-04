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
#include <math.h>
#include "../include/PID.hpp"
#include "PID.hpp"

/**
 * @brief PID Object for unit tests
 * 
 */
PID test(1.0,1.0,1.0,1.0,1.0,1.0);

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(PID_test, test_computePID) {
   
  // double testVal = test.computePID(1.0,1.0);
  EXPECT_NEAR(test.computePID(1.0,1.0), -3.0, 0.01);
  // EXPECT_EQ(test.returnPID(1.0, 1.0), 3.0);
}

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(PID_test, test_output){
  // PID test(1.0,1.0,1.0,1.0,1.0,1.0);
  // double testVal = test.returnPID(1.0,1.0);
  EXPECT_NEAR(test.returnPID(1.0,1.0), -3.0, 0.01);
  // EXPECT_EQ(test.computePID(1.0, 1.0), 2.0);
}