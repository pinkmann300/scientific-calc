// Header file for calculator class
#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:

    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double percentage(double num, double percent);

    
    double sqrt(double num);
    double square(double num);
    double power(double base, double exponent);

    double ln(double num);
    double log(double num, double base);


};

#endif
