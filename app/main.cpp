#include "../include/lib.hpp"
#include <cmath>
#include <iostream>

PidController::PidController(double K_p, double K_i, double K_d,
double d_t, double current_state, double target_state) {
    Kp = K_p;
    Ki = K_i;
    Kd = K_d;
    dt = d_t;
    currentState = current_state;  // initial state
    targetState = target_state;    // final state
    currentError = 0;
    prevError = 0;
    integralSum = 0;
    checkParameters();
}
double PidController::computePidOutput() {
    double pidOutput;
    int itr = 0;
    while (itr < 250) {
        currentError = targetState - currentState;
        pidOutput = proportionalController(currentError) +
        integralController(currentError) + derivativeContoller(currentError);
        prevError = currentError;
        currentState = pidOutput;
        itr++;
    }

    std::cout << "No. of Iterations : " << itr << std::endl;
    std::cout << "Target State : " << targetState << std::endl;
    std::cout << "Current State : " << currentState << std::endl;
    std::cout << std::endl;

    return pidOutput;
}
double PidController::derivativeContoller(double error) {
    double derError = Kd * std::abs((prevError - error) / dt);
    return derError;
}
double PidController::integralController(double error) {
    integralSum += error;  // cumulative error
    double intError = Ki * integralSum * dt;
    return intError;
}
double PidController::proportionalController(double error) {
    double propError = Kp * error;
    return propError;
}
bool PidController::checkParameters() {
    if (dt <= 0 || Kp <= 0 || Ki <= 0 || Kd <= 0) {
        std::cout << "ERROR: parameters cannot be zero or negative.";
        std::cout << "Check again." << std::endl;
        return false;
    }
    if (targetState < currentState) {
        std::cout << "ERROR: Current State is greater than ";
        std::cout << "Target State." << std::endl;
        return false;
    }
    return true;  // returns true  if all parameters are present and positive
}