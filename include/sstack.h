// Static size stack implemented with arrays
// Author:
#ifndef SSTACK_H
#define SSTACK_H

template <typename T>
class SStack {
    const int MAX_SIZE = 100;
    T* arr;
    int topIndex;

public:
    SStack() {}

    ~SStack() {}

    void push(T data) {}

    void pop() {}

    T getTop() {}

    bool isEmpty() {}

    bool isFull() {}

    void printStack() {}
};

#endif