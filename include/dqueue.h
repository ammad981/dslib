// Dynamic Queue implemented with linked list
// Author: Ammad Qureshi 2312213

#ifndef DQUEUE_H
#define DQUEUE_H

#include <iostream>

template <typename T>
class DQueue {
    struct Node {
        T data;
        Node *next;

        Node(T val) : data(val), next(nullptr) {}
    };

    Node *front;
    Node *rear;

public:
    DQueue() : front(nullptr), rear(nullptr) {}

    ~DQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    void enqueue(T data) {
        Node *newNode = new Node(data);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (!isEmpty()) {
            Node *temp = front;
            front = front->next;
            if (front == nullptr) {
                rear = nullptr;
            }
            delete temp;
        } else {
            std::cerr << "Queue is empty, cannot dequeue." << std::endl;
        }
    }

    T getFront() {
        if (!isEmpty()) {
            return front->data;
        } else {
            throw std::runtime_error("Queue is empty");
        }
    }

    T getRear() {
        if (!isEmpty()) {
            return rear->data;
        } else {
            throw std::runtime_error("Queue is empty");
        }
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void printQueue() {
        Node *current = front;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

#endif
