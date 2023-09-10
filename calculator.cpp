
#include "Calculator.h"
#include <iostream>
#include <cmath>

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}

double Calculator::percentage(double num, double percent) {
    return (num * percent) / 100.0;
}


double Calculator::sqrt(double num) {
    if (num < 0) {
        throw std::invalid_argument("Square root of a negative number");
    }
    return std::sqrt(num);
}

double Calculator::square(double num) {
    return num * num;
}

double Calculator::power(double base, double exponent) {
    return std::pow(base, exponent);
}

double Calculator::ln(double num) {
    if (num <= 0) {
        throw std::invalid_argument("Natural logarithm of a non-positive number");
    }
    return std::log(num);
}

double Calculator::log(double num, double base) {
    if (num <= 0 || base <= 0 || base == 1) {
        throw std::invalid_argument("Logarithm with invalid arguments");
    }
    return std::log(num) / std::log(base);
}
