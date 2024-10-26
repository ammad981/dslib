// Dynamic Queue implemented with linked list
// Author:

#ifndef DQUEUE_H
#define DQUEUE_H

template <typename T>
class DQueue {
    struct Node {

    };

    Node *front;
    Node *rear;
public:
    DQueue();
    ~DQueue();

    void enqueue(T data) {}
    void dequeue() {}

    T getFront() {}
    T getRear() {}

    bool isEmpty() {}
    void printQueue() {}
};

#endif