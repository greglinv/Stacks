// Gregory Linville

#include "func.h"

#include <iostream>

using namespace std;

int main() {
    string infixExp;
    cout << "Enter infix expression: ";
    getline(cin, infixExp);
    if (!KW::isBalanced(infixExp)) {
        cout << "Invalid Expression" << endl;
    }
    else {
        string postfixExp = KW::infixToPostfix(infixExp);
        cout << "Postfix expression: " << postfixExp << endl;
    }
    return 0;
}