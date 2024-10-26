#ifndef LIST_H
#define LIST_H

template <typename T>
class List {
    struct Node {

    };

    Node *head;
public:
    List();
    ~List();

    void insertAtBegin(T data) {}
    void insertAtEnd(T data) {}
    void insertAtMiddle(T data, unsigned int position) {}

    void deleteAtBegin() {}
    void deleteAtEnd() {}
    void deleteAtMiddle(unsigned int position) {}

    T getAtBegin() {}
    T getAtEnd() {}
    T getAtMiddle(unsigned int position) {}

    void printList() {}
};

#endif