#ifndef CALCULATOR_H
#define CALCULATOR_H
#pragma once
#include <string>
#include <expression.h>

class Calculator
{
private:
    std::string inputFormatted = "";
    std::string inputBeautiful = "";
    Expression expression = Expression("");

    bool previousPrefix = false;

public:
    Calculator();

    std::string getFormatted();

    std::string getExpression();

    std::string input(std::string in);

    void clear();

    double calculate();
};

#endif // CALCULATOR_H
