#include <iostream>
#include <stdexcept>
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
        Calculator mCalculator{std::stod(argv[1]), *(argv[2]), std::stod(argv[3])};
        result = mCalculator.calculate();
        std::cout << argv[1] << " " << argv[2] << " " << result << " = " << result << std::endl;
    }
    return result;
}