#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack {
    struct Node {

    };

    Node *top;
public:
    Stack();
    ~Stack();

    void push(T data) {}
    void pop() {}

    T getTop() {}

    bool isEmpty() {}
    void printStack() {}
};

#endif