#include "func.h"
#include <iostream>
#include <stack>
#include <string>

using namespace std;

namespace KW {

    bool isOperator(char ch) {
        return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%';
    }

    bool isOperand(char ch) {
        return (ch >= '0' && ch <= '9');
    }

    int precedence(char ch) {
        if (ch == '+' || ch == '-') {
            return 1;
        }
        else if (ch == '*' || ch == '/' || ch == '%') {
            return 2;
        }
        else {
            return 0;
        }
    }

    bool isBalanced(string exp) {
        stack<char> s;

        for (char ch : exp) {
            if (ch == '(' || ch == '{' || ch == '[') {
                s.push(ch);
            }
            else if (ch == ')' || ch == '}' || ch == ']') {
                if (s.empty()) {
                    return false;
                }
                char top = s.top();
                s.pop();
                if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return s.empty();
    }

    string infixToPostfix(string exp) {
        stack<char> s;
        string result = "";

        for (char ch : exp) {
            if (isdigit(ch)) {
                result += ch;
            }
            else if (isOperator(ch)) {
                while (!s.empty() && s.top() != '(' && precedence(s.top()) >= precedence(ch)) {
                    result += s.top();
                    s.pop();
                }
                s.push(ch);
            }
            else if (ch == '(') {
                s.push(ch);
            }
            else if (ch == ')') {
                while (!s.empty() && s.top() != '(') {
                    result += s.top();
                    s.pop();
                }
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                }
            }
        }

        while (!s.empty()) {
            result += s.top();
            s.pop();
        }

        return result;
    }
}