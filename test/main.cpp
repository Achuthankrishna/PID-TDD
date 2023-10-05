/**
 * @file main.cpp
 * @author Jerry Pittman, Jr. (jpittma1@umd.edu)
 * @brief Gtest
 * @version 0.2
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
