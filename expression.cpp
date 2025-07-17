#include <string>
#include <queue>
#include <stack>
#include <sstream>
#include <map>
#include <cmath>
#include <expression.h>

bool isUnaryPrefixOperation(std::string elem) {
    return (elem == "sin" || elem == "cos" || elem == "tg" || elem == "ctg" || elem == "sqrt");
}

bool isBinaryOperation(std::string elem) {
    return (elem == "*" || elem == "/" || elem == "-" || elem == "+" || elem == "^");
}

bool isStringNumber(std::string num) {
    return ((int)(num[0]) >= 48 && (int)(num[0]) <= 57);
}

double factorial(double num) {
    if (num == 0) return 1;
    return num * factorial(num - 1);
}


void Expression::appendRPN(std::string elem) {
    RPN_expression += elem + " ";
    RPN_Queue.push(elem);
}

double Expression::binary_operations(double a, double b, std::string op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") {
        if (!b) throw("ZeroDivision");
        else return a / b;
    }
    if (op == "^") return pow(a, b);
    throw("UnknownOperation");
}

 double Expression::unary_operations(double a, std::string op) {
    if (op == "sin") return sin(a);
    if (op == "cos") return cos(a);
    if (op == "tg") return tan(a);
    if (op == "ctg") return 1/tan(a);
    if (op == "sqrt") return sqrt(a);
    if (op == "!") return factorial(a);
    throw("UnknownOperation");
}

Expression::Expression(std::string expression) {
    expression_ = expression;
    this->createRPN();
}

std::string Expression::getExpression() {
    return expression_;
}

std::string Expression::getRPN() {
    return RPN_expression;
}

void Expression::createRPN() {
    std::stringstream ss(expression_);
    std::string elem;

    std::stack<std::string> St;
    RPN_expression = "";

    //uses dijkstra algorythm to turn usual expression to RPN
    while(ss >> elem) {
        if (isStringNumber(elem)) {
            this->appendRPN(elem);
        }

        if (isUnaryPrefixOperation(elem))
            St.push(elem);

        if (elem == "!") {
            this->appendRPN(elem);
        }

        if (elem == "(")
            St.push(elem);

        if (elem == ")") {
            while (St.top() != "(") {
                this->appendRPN(St.top());
                St.pop();
            }
            St.pop();
        }

        if (elem != "(" && priority.count(elem)) {
            while (!St.empty() && (isUnaryPrefixOperation(St.top()) || priority[St.top()] >= priority[elem])) {
                this->appendRPN(St.top());
                St.pop();
            }
            St.push(elem);
        }

    }

    while (!St.empty()) {
        this->appendRPN(St.top());
        St.pop();
    }
}


double Expression::calculate() {
    if (RPN_expression == "NULL") this->createRPN();
    if (isCalculated) return result_;
    std::stack<std::string> St;

    while (!RPN_Queue.empty()) {
        std::string elem = RPN_Queue.front();
        RPN_Queue.pop();

        if (isStringNumber(elem)) St.push(elem);
        //because of the string type have to do the shenanigans
        if (isBinaryOperation(elem)) {
            double a = std::stod(St.top());
            St.pop();
            double b = std::stod(St.top());
            St.pop();
            St.push(std::to_string(binary_operations(b, a, elem)));
        }

        if (isUnaryPrefixOperation(elem)) {
            double a = std::stod(St.top());
            St.pop();
            St.push(std::to_string(unary_operations(a, elem)));
            }
        }

    result_ = std::stod(St.top());
    isCalculated = true;
    return result_;
    }
