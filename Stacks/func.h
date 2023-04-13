#pragma once


#ifndef FUNC_H
#define FUNC_H

#include <stack>
#include <string>

using namespace std;

namespace KW {
    bool isBalanced(string exp);
    bool isOperator(char ch);
    int precedence(char ch);
    bool isBalanced(std::string exp);
    string infixToPostfix(string exp);
}

#endif /* EXPRESSION_MANAGER_H */
