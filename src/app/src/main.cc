#include <iostream>
#include <stdexcept>
#include <cmath>
#include "calculator.h"

int main(int argc, char** argv)
{
    double result = 0;
    if(argc != 4)
    {
        throw std::invalid_argument("Please pass 3 arguments: <number1> <sign> <number2>");
    }
    else
    {
        double firstNumber = std::stod(argv[1]);
        char sign = *(argv[2]);
        double secondNUmber = std::stod(argv[3]);
        Calculator mCalculator{firstNumber, sign, secondNUmber};
        result = mCalculator.calculate();
        if(secondNUmber<0 && sign == '-')
        {
            std::cout << firstNumber << "+" << abs(secondNUmber) << "=" << result << std::endl;
        }
        else if(secondNUmber<0 && (sign == '+' || sign == '-'))
        {
            std::cout << firstNumber << "" << secondNUmber << "=" << result << std::endl;
        }
        else
        {
            std::cout << firstNumber << "" << argv[2] << "" << secondNUmber << "=" << result << std::endl;
        }
    }
    return result;
}