/**
 * @file PID.cpp
 * @author Jerry Pittman, Jr. (jpittma1@umd.edu),Vyshnav Achuthan
 * (vyachu07@umd.edu)
 * @brief For PID class implementation
 * @version 0.1
 * @date 2023-10-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "../include/PID.hpp"
#include "PID.hpp"
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
PID::PID(double K_p, double K_i, double K_d, double d_t, double current_state,
         double target_state) {
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
bool PID::check(double K_p, double K_i, double dt, double curr, double target) {
  if (K_p < 0 || K_i < 0 || dt < 0) {
    std::cout << "ZeroExeptionError: Failed";
    return false;
  }
  if (curr > target) {
    std::cout << "StateError: Failed";
    return false;
  }
  return true;
}
/**
 * @brief Method to compute method
 *
 * @param K_p
 * @param K_i
 * @return double
 */
double PID::computePID() {
  // Run the loop
  while (true) {
    // Compute error
    double error = target - curr;

    // Calculate the proportional term
    double Pout = Kp * error;

    // Calculate the integral term
    integral += error * dt;
    double Iout = Ki * integral;

    // Calculate the derivative term
    double derivative = (error - prevError) / dt;
    double Dout = Kd * derivative;

    // Calculate the overall controller output by summing P, I, and D terms
    double output = Pout + Iout + Dout;

    // Update the current value based on the controller output
    curr += output;

    // Update the previous error for the next iteration
    prevError = error;

    // Check if the error is very close to zero
    if (std::fabs(target - curr) < 0.000001)
      return curr;
  }
}