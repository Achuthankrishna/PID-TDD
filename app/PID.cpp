/**
 * @file PID.cpp
 * @author Jerry Pittman, Jr. (jpittma1@umd.edu)
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
#include <cmath> 

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
double PID::computePID(double K_p_1,double K_i_1)
{
//   double error=DOUBLE_MAX; 
  int i = 0;
  while(true) {
    double curr_output;
    double error = target - curr;

    double Pout = Kp * error;

    integral+= error* dt;
    double Iout = Ki * integral;

    double derivative = (error-prevError )/ dt;
    double Dout = Kd*derivative ;

    double output = Pout + Iout + Dout;

    curr+= output;
    prevError = error;
    i+=1;
    if (fabs(target - curr) < 0.000001 )
        return curr ;
    
  }   
  
}
