/**
 * @file PID.cpp
 * @author Jerry Pittman, Jr. (jpittma1@umd.edu),Vyshnav Achuthan (vyachu07@umd.edu)
 * @brief For PID class implementation
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include "../include/PID.hpp"
#include "PID.hpp"

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
 * @brief Mehtod to check constants
 * 
 * @param K_p 
 * @param K_i 
 * @param dt 
 * @param curr 
 * @param target 
 * @return true 
 * @return false 
 */
bool PID::check(double K_p,double K_i,double dt,double curr,double target)
{
    return true;
}
/**
 * @brief Method to compute method 
 * 
 * @param K_p 
 * @param K_i 
 * @return double 
 */
double PID::computePID()
{
    return (PID::Kd*PID::Kp);
}