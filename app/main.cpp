/**
 * @file main.cpp
 * @author Jerry Pittman, Jr. (jpittma1@umd.edu)
 *         Vyshnav Achuthan (vyachu07@umd.edu)
 * @brief PID-TDD Main File
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>
#include "../include/PID.hpp"
#include "PID.hpp"

int main () {
    
    PID controller(0.1,0.5, 0.01, 0.1, 0.0,100.0  );    
    std::cout<<controller.computePID(1.0, 1.0);
    return 0;}
