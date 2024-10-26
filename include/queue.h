#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue {
    struct Node {

    };

    Node *front;
    Node *rear;
public:
    Queue();
    ~Queue();

    void enqueue(T data) {}
    void dequeue() {}

    T getFront() {}
    T getRear() {}

    bool isEmpty() {}
    void printQueue() {}
};

#endif