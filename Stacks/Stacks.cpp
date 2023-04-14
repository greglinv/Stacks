// Gregory Linville

#include "func.h"
#include "queue.h"

#include <iostream>

using namespace std;

int main() {

    Queue q;
    q.enqueue(5);
    q.enqueue(12);
    q.enqueue(15);
    cout << "Front: " << q.peek() << endl;
    cout << "Queue size: " << q.size() << endl;
    q.dequeue();
    cout << "Front after dequeue: " << q.peek() << endl;
    cout << "Queue size after dequeue: " << q.size() << endl;

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