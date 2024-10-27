// Static size stack implemented with arrays
// Author: Musa Ibrahim 2312211

#ifndef SSTACK_H
#define SSTACK_H

template<typename T>
class SStack {
    const int MAX_SIZE = 100;
    T arr[100];
    int topIndex;

public:
    SStack(): topIndex(-1) {
    }

    void push(T data) {
        if (!isFull()) {
            arr[++topIndex] = data;
        }
    }

    void pop() {
        if (!isEmpty()) {
            topIndex--;
        }
    }

    T getTop() {
        if (!isEmpty()) {
            return arr[topIndex];
        }
        return T(); // Returning default value if stack is empty.
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == MAX_SIZE - 1;
    }

    int search(T data) {
        for (int i = topIndex; i >= 0; i--) {
            if (arr[i] == data) {
                return topIndex - i;
            }
        }
        return -1; // Returning -1 if element is not found.
    }

    void printStack() {
        for (int i = topIndex; i >= 0; i--) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

#endif
