#include "queue.h"

using namespace std;

void Queue::enqueue(int x) {
    q.push(x);
}

    int Queue::dequeue() {
        int front = q.front();
        q.pop();
        return front;
    }

    int Queue::peek() {
        return q.front();
    }

    bool Queue::isEmpty() {
        return q.empty();
    }

    int Queue::size() {
        return q.size();
    }