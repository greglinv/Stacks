#pragma once

#ifndef QUEUE_H
#define QUEUE_H

#include <queue>

using namespace std;

class Queue {
private:
    queue<int> q;

public:
    void enqueue(int x);
    int dequeue();
    int peek();
    bool isEmpty();
    int size();
};

#endif
