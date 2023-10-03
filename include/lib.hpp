#pragma once

#include <iostream>

class PidController {
 private:
    double Kp;            // Proportional Gain
    double Ki;            // Integral Gain
    double Kd;            // Differential Gain
    double dt;            // time difference
    double currentState;  // initial state
    double targetState;   // final state
    double currentError;
    double prevError;
    double integralSum;

 public:
    PidController(double, double, double, double, double, double);
    double derivativeContoller(double);
    double integralController(double);
    double proportionalController(double);
    double computePidOutput();
    bool checkParameters();
};
