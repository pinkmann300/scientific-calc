#include <iostream>
#include "Calculator.h"


// Main program begins here.


int main() {
    Calculator calculator;

    double a, b;   //  The two operands making up the expression
    char op;  // Given as the main character element which parses the operator of any given expression

    while (true) {
        std::cout << "Enter expression , (Example : 9 + 9): ";
        std::cin >> a >> op >> b;

        try {
            double result;
            switch (op) {
                case '+':
                    result = calculator.add(a, b);
                    break;
                case '-':
                    result = calculator.subtract(a, b);
                    break;
                case '*':
                    result = calculator.multiply(a, b);
                    break;
                case '/':
                    result = calculator.divide(a, b);
                    break;
                case '%':
                    result = calculator.percentage(a, b);
                    break;
                case 's':
                    result = calculator.sqrt(a);
                    break;
                case 'q':
                    result = calculator.square(a);
                    break;
                case '^':
                    result = calculator.power(a, b);
                    break;
                case 'l':
                    result = calculator.ln(a);
                    break;
                case 'o':
                    result = calculator.log(a, b);
                    break;
                default:
                    std::cerr << "Invalid operation." << std::endl;
                    continue;
            }
            std::cout << "Result: " << result << std::endl;
        } catch (const std::invalid_argument& e) {   // Error handling in case of faulty input (Throws syntax error)
            std::cerr << "Syntax Error: " << e.what() << std::endl;
        }
    }

    return 0;
}


/*
Expression Manual 

s - sqrt 
q - square 
^ - power 
l - natural log
o - normal logarithm.

*/