// Static size queue implemented with arrays
// Author: Muhmmad Ahmad 23122--

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
    SQueue(): arr(nullptr), frontIndex(0), rearIndex(0), count(0) {
    }

    void enqueue(T data) {}

    void dequeue() {}

    T getFront() {}

    T getRear() {}

    bool isEmpty() {}

    bool isFull() {}

    void printQueue() {}
};

#endif