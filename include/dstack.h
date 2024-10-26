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
    DStack();
    ~DStack();

    void push(T data) {}
    void pop() {}

    T getTop() {}

    bool isEmpty() {}
    void printStack() {}
};

#endif