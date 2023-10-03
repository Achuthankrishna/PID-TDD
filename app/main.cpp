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

#include "../include/PID.hpp"
#include <cmath>
#include <iostream>

/**
 * @brief Construct a new PID::PID object
 * 
 * @param K_p proportional gain
 * @param K_i integral gain
 * @param K_d derivative gain
 * @param d_t change in time
 * @param current_state starting state
 * @param target_state output/end goal
 */
PID::PID(double K_p, double K_i, double K_d,
double d_t, double current_state, double target_state) {
    Kp = K_p;
    Ki = K_i;
    Kd = K_d;
    dt = d_t;
    curr = current_state;  
    target = target_state;    // final state
    curerr = 0;
    prevError = 0;
    integral = 0;
}

int main () {
    
    return 0;
}