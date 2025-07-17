#ifndef EXPRESSION_H
#define EXPRESSION_H
#pragma once
#include <string>
#include <queue>
#include <map>

bool isUnaryPrefixOperation(std::string elem);
bool isBinaryOperation(std::string elem);
bool isStringNumber(std::string num);

class Expression
{
private:
    std::string expression_;
    std::string RPN_expression;
    std::queue<std::string> RPN_Queue;

    double result_;
    bool isCalculated = false;

    std::map<std::string, int> priority = {
        {"(", 0},
        {"+", 1},
        {"-", 1},
        {"*", 2},
        {"/", 2},
        {"^", 3}
    };

    void appendRPN(std::string elem);

    double binary_operations(double a, double b, std::string op);
    double unary_operations(double a, std::string op);

public:
    Expression(std::string expression = "");

    std::string getExpression();
    std::string getRPN();

    void createRPN();

    double calculate();
};

#endif // EXPRESSION_H
