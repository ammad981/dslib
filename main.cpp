#include <iostream>
#include "list.h"
#include "dstack.h"
#include "dqueue.h"
#include "squeue.h"
#include "sstack.h"

using namespace std;

// Function to print Data
void printData(char x) {
    cout << "x: " << x << endl;
}

// Function to get Data input from user
char getData() {
    char x;
    cout << "Enter character value: ";
    cin >> x;
    return x;
}

// Function to handle search result output
void printSearchResult(int position) {
    if (position != -1) {
        cout << "Element found at position: " << position << endl;
    } else {
        cout << "Element not found!" << endl;
    }
}

void listMenu() {
    List<char> list;
    int choice;

    while (true) {
        cout << "\nLinked List Operations:\n"
                << "1. Insert at beginning\n"
                << "2. Insert at end\n"
                << "3. Insert at position\n"
                << "4. Delete from beginning\n"
                << "5. Delete from end\n"
                << "6. Delete from position\n"
                << "7. Print list\n"
                << "8. Search element\n"
                << "9. Return to main menu\n"
                << "Enter choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                list.insertAtBegin(getData());
                break;
            case 2:
                list.insertAtEnd(getData());
                break;
            case 3: {
                cout << "Enter position: ";
                unsigned int pos;
                cin >> pos;
                list.insertAtMiddle(getData(), pos);
                break;
            }
            case 4:
                list.deleteAtBegin();
                break;
            case 5:
                list.deleteAtEnd();
                break;
            case 6: {
                cout << "Enter position: ";
                unsigned int pos;
                cin >> pos;
                list.deleteAtMiddle(pos);
                break;
            }
            case 7:
                list.printList();
                break;
            case 8:
                printSearchResult(list.search(getData()));
                break;
            case 9:
                return;
            default:
                cout << "Invalid choice!\n";
        }
    }
}

void dstackMenu() {
    DStack<char> dstack;
    int choice;

    while (true) {
        cout << "\nDynamic Stack Operations:\n"
                << "1. Push\n"
                << "2. Pop\n"
                << "3. Get top\n"
                << "4. Check if empty\n"
                << "5. Print stack\n"
                << "6. Search element\n"
                << "7. Return to main menu\n"
                << "Enter choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                dstack.push(getData());
                break;
            case 2:
                dstack.pop();
                break;
            case 3:
                if (!dstack.isEmpty()) {
                    cout << "Top element: ";
                    printData(dstack.getTop());
                } else {
                    cout << "Stack is empty!\n";
                }
                break;
            case 4:
                if (dstack.isEmpty())
                    cout << "Stack is empty\n";
                else
                    cout << "Stack is not empty\n";
                break;
            case 5:
                dstack.printStack();
                break;
            case 6:
                printSearchResult(dstack.search(getData()));
                break;
            case 7:
                return;
            default:
                cout << "Invalid choice!\n";
        }
    }
}

void dqueueMenu() {
    DQueue<char> dqueue;
    int choice;

    while (true) {
        cout << "\nDynamic Queue Operations:\n"
                << "1. Enqueue\n"
                << "2. Dequeue\n"
                << "3. Get front\n"
                << "4. Get rear\n"
                << "5. Check if empty\n"
                << "6. Print queue\n"
                << "7. Search element\n"
                << "8. Return to main menu\n"
                << "Enter choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                dqueue.enqueue(getData());
                break;
            case 2:
                dqueue.dequeue();
                break;
            case 3:
                if (!dqueue.isEmpty()) {
                    cout << "Front element: ";
                    printData(dqueue.getFront());
                } else {
                    cout << "Queue is empty!\n";
                }
                break;
            case 4:
                if (!dqueue.isEmpty()) {
                    cout << "Rear element: ";
                    printData(dqueue.getRear());
                } else {
                    cout << "Queue is empty!\n";
                }
                break;
            case 5:
                if (dqueue.isEmpty())
                    cout << "Queue is empty\n";
                else
                    cout << "Queue is not empty\n";
                break;
            case 6:
                dqueue.printQueue();
                break;
            case 7:
                printSearchResult(dqueue.search(getData()));
                break;
            case 8:
                return;
            default:
                cout << "Invalid choice!\n";
        }
    }
}

void sstackMenu() {
    SStack<char> sstack;
    int choice;

    while (true) {
        cout << "\nStatic Stack Operations:\n"
                << "1. Push\n"
                << "2. Pop\n"
                << "3. Get top\n"
                << "4. Check if empty\n"
                << "5. Check if full\n"
                << "6. Print stack\n"
                << "7. Search element\n"
                << "8. Return to main menu\n"
                << "Enter choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                if (!sstack.isFull())
                    sstack.push(getData());
                else
                    cout << "Stack is full!\n";
                break;
            case 2:
                sstack.pop();
                break;
            case 3:
                if (!sstack.isEmpty()) {
                    cout << "Top element: ";
                    printData(sstack.getTop());
                } else {
                    cout << "Stack is empty!\n";
                }
                break;
            case 4:
                if (sstack.isEmpty())
                    cout << "Stack is empty\n";
                else
                    cout << "Stack is not empty\n";
                break;
            case 5:
                if (sstack.isFull())
                    cout << "Stack is full\n";
                else
                    cout << "Stack is not full\n";
                break;
            case 6:
                sstack.printStack();
                break;
            case 7:
                printSearchResult(sstack.search(getData()));
                break;
            case 8:
                return;
            default:
                cout << "Invalid choice!\n";
        }
    }
}

void squeueMenu() {
    SQueue<char> squeue;
    int choice;

    while (true) {
        cout << "\nStatic Queue Operations:\n"
                << "1. Enqueue\n"
                << "2. Dequeue\n"
                << "3. Get front\n"
                << "4. Get rear\n"
                << "5. Check if empty\n"
                << "6. Check if full\n"
                << "7. Print queue\n"
                << "8. Search element\n"
                << "9. Return to main menu\n"
                << "Enter choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                if (!squeue.isFull())
                    squeue.enqueue(getData());
                else
                    cout << "Queue is full!\n";
                break;
            case 2:
                squeue.dequeue();
                break;
            case 3:
                if (!squeue.isEmpty()) {
                    cout << "Front element: ";
                    printData(squeue.getFront());
                } else {
                    cout << "Queue is empty!\n";
                }
                break;
            case 4:
                if (!squeue.isEmpty()) {
                    cout << "Rear element: ";
                    printData(squeue.getRear());
                } else {
                    cout << "Queue is empty!\n";
                }
                break;
            case 5:
                if (squeue.isEmpty())
                    cout << "Queue is empty\n";
                else
                    cout << "Queue is not empty\n";
                break;
            case 6:
                if (squeue.isFull())
                    cout << "Queue is full\n";
                else
                    cout << "Queue is not full\n";
                break;
            case 7:
                squeue.printQueue();
                break;
            case 8:
                printSearchResult(squeue.search(getData()));
                break;
            case 9:
                return;
            default:
                cout << "Invalid choice!\n";
        }
    }
}

int main() {
    cout << "Welcome to Data Structures Library Demo!\n"
            << "This program demonstrates various data structure implementations\n"
            << "using a custom Data type with integer and character fields.\n\n";

    int choice;
    while (true) {
        cout << "\nMain Menu:\n"
                << "1. Linked List\n"
                << "2. Dynamic Stack\n"
                << "3. Dynamic Queue\n"
                << "4. Static Stack\n"
                << "5. Static Queue\n"
                << "6. Exit\n"
                << "Enter choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                listMenu();
                break;
            case 2:
                dstackMenu();
                break;
            case 3:
                dqueueMenu();
                break;
            case 4:
                sstackMenu();
                break;
            case 5:
                squeueMenu();
                break;
            case 6:
                cout << "Thank you for using Data Structures Library Demo!\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
}
