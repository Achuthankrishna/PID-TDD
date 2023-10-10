/**
 * @file PID.hpp
 * @author Jerry Pittman (jpitman@umd.edu)
 *         Vyshnav Achuthan (vyachu07@umd.edu)
 * @brief PID controller Class header file
 * @version 0.2
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#ifndef INCLUDE_PID_HPP
#define INCLUDE_PID_HPP
#include <iostream>

/**
 * @brief PID Class Constructor
 * 
 */
class PID {
 private:
    double Kp;
    double Ki;
    double Kd;
    double dt;
    double curr;
    double target;
    double curerr;
    double prevError;
    double integral;

 public:
    PID(double, double, double, double, double, double);
    bool check(double, double, double, double, double);
    double computePID();
};

#endif
