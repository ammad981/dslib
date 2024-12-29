// Dynamic Stack implemented with linked list
// Author: Wajeeh Ahmed 2312223

#ifndef DSTACK_H
#define DSTACK_H

#include <iostream>

template <typename T>
class DStack
{
    struct Node
    {
        T data;
        Node *next;

        Node(T data) : data(data), next(nullptr)
        {
        }
    };

    Node *top;

public:
    DStack() : top(nullptr)
    {
    }

    void push(T data)
    {
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if (!isEmpty())
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    T getTop()
    {
        if (!isEmpty())
        {
            return top->data;
        }
        throw std::runtime_error("Stack is empty");
    }

    bool isEmpty() { return top == nullptr; }

    int search(T target)
    {
        if (isEmpty())
        {
            return -1;
        }

        Node *current = top;
        int position = 0;

        while (current != nullptr)
        {
            if (current->data == target)
            {
                return position;
            }
            current = current->next;
            position++;
        }

        return -1;
    }

    void printStack()
    {
        Node *current = top;
        while (current)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

#endif
