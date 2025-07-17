#include <string>
#include <expression.h>
#include <Calculator.h>


Calculator::Calculator(){}

std::string Calculator::getFormatted() {
    return inputFormatted;
}

std::string Calculator::getExpression() {
    return inputBeautiful;
}

std::string Calculator::input(std::string in) {
    if (isStringNumber(in) || in == ".") {
        inputFormatted += in;
        inputBeautiful += in;
        previousPrefix = false;
    }
    if (isUnaryPrefixOperation(in)) {
        inputFormatted += " " + in + " ";
        inputBeautiful += " " + in;
        previousPrefix = true;
    }
    if (isBinaryOperation(in)) {
        inputFormatted += " " + in + " ";
        inputBeautiful += " " + in + " ";
        previousPrefix = false;
    }
    if (in == "(") {
        inputFormatted += " " + in + " ";
        if (previousPrefix) inputBeautiful += in;
        else inputBeautiful += " " + in;
        previousPrefix = false;
    }
    if (in == ")") {
        inputFormatted += " " + in + " ";
        inputBeautiful += in + " ";
    }
    if (in == "!") {
        inputFormatted += in + " ";
    }
    return inputBeautiful;
}

void Calculator::clear() {
    inputFormatted = "";
    inputBeautiful = "";
    expression = Expression("");
    previousPrefix = false;
}

double Calculator::calculate() {
    expression = Expression(inputFormatted);
    return expression.calculate();
}

