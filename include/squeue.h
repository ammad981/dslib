// Static size queue implemented with arrays
// Author: Muhammad Ahmad 2312212

#ifndef SQUEUE_H
#define SQUEUE_H

#include <iostream>

template<typename T>
class SQueue {
    const int MAX_SIZE = 100;
    T *arr;
    int frontIndex;
    int rearIndex;

public:
    SQueue() : arr(new T[MAX_SIZE]), frontIndex(-1), rearIndex(-1) {
    }

    void enqueue(T data) {
        if (isFull()) {
            std::cout << "Queue is full" << data << std::endl;
            return;
        }
        if (isEmpty()) {
            frontIndex = 0;
        }
        rearIndex++;
        arr[rearIndex] = data;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
            return;
        }
        frontIndex++;
        if (frontIndex > rearIndex) {
            frontIndex = rearIndex = -1;
        }
    }

    T getFront() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
        }
        return arr[frontIndex];
    }

    T getRear() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
        }
        return arr[rearIndex];
    }

    bool isEmpty() { return frontIndex == -1; }

    bool isFull() { return rearIndex == MAX_SIZE - 1; }

    int search(T target) {
        if (isEmpty()) {
            return -1;
        }

        for (int i = frontIndex; i <= rearIndex; i++) {
            if (arr[i] == target) {
                return i - frontIndex; // Return position relative to front
            }
        }

        return -1;
    }

    void printQueue() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
            return;
        }
        for (int i = frontIndex; i <= rearIndex; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

#endif
