// Singular Linked List
// Author: Hammad Majid 2312200

#ifndef LIST_H
#define LIST_H

#include <iostream>

template<typename T>
class List {
    struct Node {
        T data;
        Node *next;

        Node(T value) : data(value), next(nullptr) {
        }
    };

    Node *head;

public:
    List() : head(nullptr) {
    }

    // Destructor to free allocated memory
    ~List() {
        while (head != nullptr) {
            deleteAtBegin();
        }
    }

    void insertAtBegin(T data) {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(T data) {
        Node *newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    void insertAtMiddle(T data, unsigned int position) {
        if (position == 0) {
            insertAtBegin(data);
            return;
        }

        Node *newNode = new Node(data);
        Node *current = head;
        unsigned int currentPos = 0;

        while (current != nullptr && currentPos < position - 1) {
            current = current->next;
            currentPos++;
        }

        if (current == nullptr) {
            std::cout << "Position out of bounds\n";
            delete newNode;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void deleteAtBegin() {
        if (head == nullptr) {
            std::cout << "List is empty\n";
            return;
        }

        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (head == nullptr) {
            std::cout << "List is empty\n";
            return;
        }

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node *current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }

        delete current->next;
        current->next = nullptr;
    }

    void deleteAtMiddle(unsigned int position) {
        if (head == nullptr) {
            std::cout << "List is empty\n";
            return;
        }

        if (position == 0) {
            deleteAtBegin();
            return;
        }

        Node *current = head;
        unsigned int currentPos = 0;

        while (current != nullptr && currentPos < position - 1) {
            current = current->next;
            currentPos++;
        }

        if (current == nullptr || current->next == nullptr) {
            std::cout << "Position out of bounds\n";
            return;
        }

        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    int search(T target) {
        if (head == nullptr) {
            return -1;
        }

        Node *current = head;
        int position = 0;

        while (current != nullptr) {
            if (current->data == target) {
                return position;
            }
            current = current->next;
            position++;
        }

        return -1;
    }

    void printList() {
        Node *current = head;

        if (current == nullptr) {
            std::cout << "List is empty\n";
            return;
        }

        while (current != nullptr) {
            std::cout << current->data;
            if (current->next != nullptr) {
                std::cout << " -> ";
            }
            current = current->next;
        }
        std::cout << std::endl;
    }
};

#endif
