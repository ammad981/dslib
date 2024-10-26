// Static size stack implemented with arrays
// Author: Musa Ibrahim 23122--
#ifndef SSTACK_H
#define SSTACK_H

template <typename T>
class SStack {
    const int MAX_SIZE = 100;
    T* arr;
    int topIndex;

public:
    SStack(): arr(nullptr), topIndex(0) {
    }

    void push(T data) {}

    void pop() {}

    T getTop() {}

    bool isEmpty() {}

    bool isFull() {}

    void printStack() {}
};

#endif