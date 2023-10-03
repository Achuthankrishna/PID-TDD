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
    target = target_state;
    curerr = 0;
    prevError = 0;
    integral = 0;

}
/**
 * @brief Method to return gain constants
 * 
 * @param K_p 
 * @param K_i 
 * @return double 
 */
double PID::returnPID(double K_p,double K_i)
{
    return K_p;
}
/**
 * @brief Method to compute method 
 * 
 * @param K_p 
 * @param K_i 
 * @return double 
 */
double PID::computePID(double K_p,double K_i)
{
    return (K_p*K_i);
}

int main () {
    PID controller(1.0, 1.0, 1.0, 1.0,1.0,1.0);    
    return 0;}
