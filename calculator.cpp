#include "Calculator.h"
#include <iostream>
#include <stdexcept>
#include <cassert>

double Calculator::add(double a, double b)
{
    try
    {
        assert(!std::isnan(a) && !std::isnan(b));
        return a + b;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error in add(): " << e.what() << std::endl;
        throw;
    }
}

double Calculator::subtract(double a, double b)
{
    try
    {
        assert(!std::isnan(a) && !std::isnan(b));
        return a - b;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error in subtract(): " << e.what() << std::endl;
        throw;
    }
}

double Calculator::multiply(double a, double b)
{
    try
    {
        assert(!std::isnan(a) && !std::isnan(b));
        return a * b;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error in multiply(): " << e.what() << std::endl;
        throw;
    }
}

double Calculator::divide(double a, double b)
{
    try
    {
        assert(!std::isnan(a) && !std::isnan(b));
        if (b == 0)
        {
            throw std::runtime_error("Division by zero");
        }
        return a / b;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error in divide(): " << e.what() << std::endl;
        throw;
    }
}

double Calculator::percentage(double a, double b)
{
    try
    {
        assert(!std::isnan(a) && !std::isnan(b) && b != 0);
        return (a / b) * 100.0;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error in percentage(): " << e.what() << std::endl;
        throw;
    }
}

double Calculator::sqrt(double a)
{
    try
    {
        assert(!std::isnan(a) && a >= 0);
        return std::sqrt(a);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error in squareRoot(): " << e.what() << std::endl;
        throw;
    }
}

double Calculator::power(double base, double exponent)
{
    try
    {
        assert(!std::isnan(base) && !std::isnan(exponent));
        return std::pow(base, exponent);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error in power(): " << e.what() << std::endl;
        throw;
    }
}

double Calculator::ln(double a)
{
    try
    {
        assert(!std::isnan(a) && a > 0);
        return std::log(a);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error in naturalLog(): " << e.what() << std::endl;
        throw;
    }
}

double Calculator::log(double base, double a)
{
    try
    {
        assert(!std::isnan(base) && !std::isnan(a) && base > 0 && a > 0);
        return std::log(a) / std::log(base);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error in log(): " << e.what() << std::endl;
        throw;
    }
}
