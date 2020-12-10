/**********************************************
 * Self-Driving Car Nano-degree - Udacity
 *  Created on: September 20, 2020
 *      Author: Munir Jojo-Verge
 **********************************************/

/**
 * @file utils.h
 **/

#pragma once

#include <random>
#include <vector>

#include <carla/client/Client.h>

namespace utils {

double distance(const double x1, const double y1, const double x2,
                const double y2);
double magnitude(carla::geom::Vector3D vector);
double deg2rad(double x);
double rad2deg(double x);
double random_noise(double start, double end);
double evaluate(std::vector<double> coefficients, double t);
std::vector<double> differentiate(std::vector<double> coefficients);
std::vector<double> evaluate_f_and_N_derivatives(
    std::vector<double> coefficients, double t, int N = 3);
double logistic(double x);

std::array<double, 2> solve_quadratic(double a, double b, double c);

float keep_angle_range_deg(float angle, double lower_limit, double upper_limit);
float keep_angle_range_rad(float angle, double lower_limit, double upper_limit);

template <typename T>
std::vector<T> linspace(T a, T b, size_t N = 50);

std::vector<double> linspace2(double a, double b, size_t N = 50);

template <typename T>
std::vector<T> cos(std::vector<T> angles_rad);

template <typename T>
std::vector<T> sin(std::vector<T> angles_rad);

std::vector<long double> cumtrapz(std::vector<double> x,
                                  std::vector<double> fx);

}  // namespace utils
