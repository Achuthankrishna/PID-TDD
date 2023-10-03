#include "../include/PID.hpp"
#include <cmath>
#include <iostream>

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