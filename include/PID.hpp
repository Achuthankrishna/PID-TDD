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
