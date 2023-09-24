#include "Calculator.h"
#include <iostream>
#include <stdexcept>
#include <cassert>
#include <cmath>

double Calculator::add(double a, double b)
{
    double result;
    std::exception *exception = nullptr;

    if (std::isnan(a) || std::isnan(b))
    {
        exception = new std::invalid_argument("Input is NaN");
    }
    else
    {
        result = a + b;
    }

    if (exception)
    {
        std::cerr << "Error in add(): " << exception->what() << std::endl;
        delete exception;
        throw;
    }

    return result;
}

double Calculator::subtract(double a, double b)
{
    double result;
    std::exception *exception = nullptr;

    if (std::isnan(a) || std::isnan(b))
    {
        exception = new std::invalid_argument("Input is NaN");
    }
    else
    {
        result = a - b;
    }

    if (exception)
    {
        std::cerr << "Error in subtract(): " << exception->what() << std::endl;
        delete exception;
        throw;
    }

    return result;
}

double Calculator::multiply(double a, double b)
{
    double result;
    std::exception *exception = nullptr;

    if (std::isnan(a) || std::isnan(b))
    {
        exception = new std::invalid_argument("Input is NaN");
    }
    else
    {
        result = a * b;
    }

    if (exception)
    {
        std::cerr << "Error in multiply(): " << exception->what() << std::endl;
        delete exception;
        throw;
    }

    return result;
}

double Calculator::divide(double a, double b)
{
    double result;
    std::exception *exception = nullptr;

    if (std::isnan(a) || std::isnan(b))
    {
        exception = new std::invalid_argument("Input is NaN");
    }
    else if (b == 0)
    {
        exception = new std::runtime_error("Division by zero");
    }
    else
    {
        result = a / b;
    }

    if (exception)
    {
        std::cerr << "Error in divide(): " << exception->what() << std::endl;
        delete exception;
        throw;
    }

    return result;
}

double Calculator::percentage(double a, double b)
{
    double result;
    std::exception *exception = nullptr;

    if (std::isnan(a) || std::isnan(b) || b == 0)
    {
        exception = new std::invalid_argument("Invalid input for percentage calculation");
    }
    else
    {
        result = (a / b) * 100.0;
    }

    if (exception)
    {
        std::cerr << "Error in percentage(): " << exception->what() << std::endl;
        delete exception;
        throw;
    }

    return result;
}

double Calculator::sqrt(double a)
{
    double result;
    std::exception *exception = nullptr;

    if (std::isnan(a) || a < 0)
    {
        exception = new std::invalid_argument("Invalid input for square root");
    }
    else
    {
        result = std::sqrt(a);
    }

    if (exception)
    {
        std::cerr << "Error in squareRoot(): " << exception->what() << std::endl;
        delete exception;
        throw;
    }

    return result;
}

double Calculator::power(double base, double exponent)
{
    double result;
    std::exception *exception = nullptr;

    if (std::isnan(base) || std::isnan(exponent))
    {
        exception = new std::invalid_argument("Input is NaN");
    }
    else
    {
        result = std::pow(base, exponent);
    }

    if (exception)
    {
        std::cerr << "Error in power(): " << exception->what() << std::endl;
        delete exception;
        throw;
    }

    return result;
}

double Calculator::ln(double a)
{
    double result;
    std::exception *exception = nullptr;

    if (std::isnan(a) || a <= 0)
    {
        exception = new std::invalid_argument("Invalid input for natural logarithm");
    }
    else
    {
        result = std::log(a);
    }

    if (exception)
    {
        std::cerr << "Error in naturalLog(): " << exception->what() << std::endl;
        delete exception;
        throw;
    }

    return result;
}

double Calculator::log(double base, double a)
{
    double result;
    std::exception *exception = nullptr;

    if (std::isnan(base) || std::isnan(a) || base <= 0 || a <= 0)
    {
        exception = new std::invalid_argument("Invalid input for logarithm");
    }
    else
    {
        result = std::log(a) / std::log(base);
    }

    if (exception)
    {
        std::cerr << "Error in log(): " << exception->what() << std::endl;
        delete exception;
        throw;
    }

    return result;
}
