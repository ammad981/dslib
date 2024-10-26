// Singular Linked List
// Author: Hammad Majid 2312200

#ifndef LIST_H
#define LIST_H

template <typename T>
class List {
    struct Node {

    };

    Node *head;
public:
    List(): head(nullptr) {
    }

    void insertAtBegin(T data) {}
    void insertAtEnd(T data) {}
    void insertAtMiddle(T data, unsigned int position) {}

    void deleteAtBegin() {}
    void deleteAtEnd() {}
    void deleteAtMiddle(unsigned int position) {}

    void printList() {}
};

#endif