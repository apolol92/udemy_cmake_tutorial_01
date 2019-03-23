#include "calculator.h"
#include <stdexcept>

Calculator::Calculator(double firstNumber, char sign, double secondNumber)
{
    this->firstNumber = firstNumber;
    this->sign = sign;
    this->secondNumber = secondNumber;
}
double Calculator::calculate()
{
    switch(this->sign)
    {
        case '+': return this->firstNumber + this->secondNumber;
        case '-': return this->firstNumber - this->secondNumber;
        case 'x': return this->firstNumber * this->secondNumber;
        case '*': return this->firstNumber * this->secondNumber;
        case ':': return this->firstNumber / this->secondNumber;
        case '/': return this->firstNumber / this->secondNumber;
        default:
            throw std::invalid_argument("You passed a invalid sign as argument");
    }
}