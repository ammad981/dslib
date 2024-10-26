// Static size queue implemented with arrays
// Author:

#ifndef SQUEUE_H
#define SQUEUE_H

template <typename T>
class SQueue {
    static const int MAX_SIZE = 100;
    T* arr;
    int frontIndex;
    int rearIndex;
    int count;

public:
    SQueue() {}

    ~SQueue() {}

    void enqueue(T data) {}

    void dequeue() {}

    T getFront() {}

    T getRear() {}

    bool isEmpty() {}

    bool isFull() {}

    void printQueue() {}
};

#endif