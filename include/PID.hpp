/**
 * @file PID.hpp
 * @author Jerry Pittman (jpitman@umd.edu)
 *         Vyshnav Achuthan (vyachu07@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include <iostream>

class PID {
 private:
    double Kp;            // Proportional Gain
    double Ki;            // Integral Gain
    double Kd;            // Differential Gain
    double dt;            // time difference
    double curr;  // initial state
    double target;   // final state
    double curerr;
    double prevError;
    double integral;

 public:
    PID(double, double, double, double, double, double);
};
