// Dynamic Stack implemented with linked list
// Author:

#ifndef DSTACK_H
#define DSTACK_H

template <typename T>
class DStack {
    struct Node {

    };

    Node *top;
public:
    DStack(): top(nullptr) {
    }

    void push(T data) {}
    void pop() {}

    T getTop() {}

    bool isEmpty() {}
    void printStack() {}
};

#endif