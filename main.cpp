#include <iostream>
#include "graphs.h"
#include "hashing.h"
#include "heap.h"
#include "sorting.h"
#include "trees.h"
#include "arrays.h"
#include "list.h"
#include "dstack.h"
#include "dqueue.h"
#include "squeue.h"
#include "sstack.h"

using namespace std;

// Function to print Data
void printData(char x)
{
    cout << "x: " << x << endl;
}

// Function to get Data input from user
char getData()
{
    char x;
    cout << "Enter character value: ";
    cin >> x;
    return x;
}

// Function to handle search result output
void printSearchResult(int position)
{
    if (position != -1)
    {
        cout << "Element found at position: " << position << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }
}

void listMenu()
{
    List<char> list;
    int choice;

    while (true)
    {
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

        switch (choice)
        {
        case 1:
            list.insertAtBegin(getData());
            break;
        case 2:
            list.insertAtEnd(getData());
            break;
        case 3:
        {
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
        case 6:
        {
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

void dstackMenu()
{
    DStack<char> dstack;
    int choice;

    while (true)
    {
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

        switch (choice)
        {
        case 1:
            dstack.push(getData());
            break;
        case 2:
            dstack.pop();
            break;
        case 3:
            if (!dstack.isEmpty())
            {
                cout << "Top element: ";
                printData(dstack.getTop());
            }
            else
            {
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

void dqueueMenu()
{
    DQueue<char> dqueue;
    int choice;

    while (true)
    {
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

        switch (choice)
        {
        case 1:
            dqueue.enqueue(getData());
            break;
        case 2:
            dqueue.dequeue();
            break;
        case 3:
            if (!dqueue.isEmpty())
            {
                cout << "Front element: ";
                printData(dqueue.getFront());
            }
            else
            {
                cout << "Queue is empty!\n";
            }
            break;
        case 4:
            if (!dqueue.isEmpty())
            {
                cout << "Rear element: ";
                printData(dqueue.getRear());
            }
            else
            {
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

void sstackMenu()
{
    SStack<char> sstack;
    int choice;

    while (true)
    {
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

        switch (choice)
        {
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
            if (!sstack.isEmpty())
            {
                cout << "Top element: ";
                printData(sstack.getTop());
            }
            else
            {
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

void squeueMenu()
{
    SQueue<char> squeue;
    int choice;

    while (true)
    {
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

        switch (choice)
        {
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
            if (!squeue.isEmpty())
            {
                cout << "Front element: ";
                printData(squeue.getFront());
            }
            else
            {
                cout << "Queue is empty!\n";
            }
            break;
        case 4:
            if (!squeue.isEmpty())
            {
                cout << "Rear element: ";
                printData(squeue.getRear());
            }
            else
            {
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

void singleArrayMenu(SingleArray<int> &arr);
void twoDArrayMenu(TwoDArray<int> &mat);

void arrayMenu()
{
    SingleArray<int> singleArray;
    TwoDArray<int> twoDArray;
    int choice;

    while (true)
    {
        cout << "\nArray Operations Menu:\n";
        cout << "1. Single Array Operations\n";
        cout << "2. 2D Array Operations\n";
        cout << "3. Return to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: // Single Array Menu
            singleArrayMenu(singleArray);
            break;

        case 2: // 2D Array Menu
            twoDArrayMenu(twoDArray);
            break;

        case 3: // Exit to Main Menu
            return;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}

void singleArrayMenu(SingleArray<int> &arr)
{
    int choice;

    while (true)
    {
        cout << "\nSingle Array Operations:\n";
        cout << "1. Input Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Traverse Array\n";
        cout << "5. Linear Search\n";
        cout << "6. Binary Search\n";
        cout << "7. Return to Array Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            arr.inputArray();
            break;

        case 2:
            arr.insertElement();
            break;

        case 3:
            arr.deleteElement();
            break;

        case 4:
            arr.traverseArray();
            break;

        case 5:
            arr.linearSearch();
            break;

        case 6:
            arr.binarySearch();
            break;

        case 7:
            return;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}

void twoDArrayMenu(TwoDArray<int> &mat)
{
    int choice;

    while (true)
    {
        cout << "\n2D Array Operations:\n";
        cout << "1. Input Matrices\n";
        cout << "2. Add Matrices\n";
        cout << "3. Multiply Matrices\n";
        cout << "4. Transpose Matrix 1\n";
        cout << "5. Return to Array Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            mat.inputMatrices();
            break;

        case 2:
            mat.addMatrices();
            break;

        case 3:
            mat.multiplyMatrices();
            break;

        case 4:
            mat.transposeMatrix();
            break;

        case 5:
            return;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}

void graphMenu()
{
    int vertices, choice, u, v, weight, start;

    // Input the number of vertices for the graph
    cout << "Enter number of vertices: ";
    cin >> vertices;

    // Create the Graph object
    Graph<int> graph(vertices);

    while (true)
    {
        cout << "\nGraph Operations Menu:\n";
        cout << "1. Add Edge\n";
        cout << "2. Perform BFS (Breadth-First Search)\n";
        cout << "3. Perform DFS (Depth-First Search)\n";
        cout << "4. Find Shortest Path (Dijkstra)\n";
        cout << "5. Display Adjacency Matrix\n";
        cout << "6. Return to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: // Add an edge
            cout << "Enter vertices (u, v) and weight: ";
            cin >> u >> v >> weight;
            graph.addEdge(u, v, weight);
            cout << "Edge added between " << u << " and " << v << " with weight " << weight << ".\n";
            break;

        case 2: // Perform BFS
            cout << "Enter starting vertex for BFS: ";
            cin >> start;
            graph.BFS(start);
            break;

        case 3: // Perform DFS
            cout << "Enter starting vertex for DFS: ";
            cin >> start;
            graph.DFS(start);
            break;

        case 4: // Find shortest paths using Dijkstra's Algorithm
            cout << "Enter starting vertex for Dijkstra's Algorithm: ";
            cin >> start;
            graph.dijkstra(start);
            break;

        case 5: // Display Adjacency Matrix
            cout << "Adjacency Matrix:\n";
            for (int i = 0; i < vertices; i++)
            {
                for (int j = 0; j < vertices; j++)
                {
                    if (graph.getAdjMatrix(i, j) == INF)
                        cout << "INF ";
                    else
                        cout << graph.getAdjMatrix(i, j) << " ";
                }
                cout << endl;
            }
            break;

        case 6: // Exit to main menu
            return;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}

void hashingMenu()
{
    int size, choice, key;

    // Input table size
    cout << "Enter hash table size: ";
    cin >> size;

    // Create HashTable object
    HashTable<int> hashTable(size);

    while (true)
    {
        cout << "\nHash Table Operations Menu:\n";
        cout << "1. Insert Key\n";
        cout << "2. Delete Key\n";
        cout << "3. Search Key\n";
        cout << "4. Display Table\n";
        cout << "5. Return To Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: // Insert Key
            cout << "Enter key to insert: ";
            cin >> key;
            hashTable.insert(key);
            cout << "Key " << key << " inserted successfully.\n";
            break;

        case 2: // Delete Key
            cout << "Enter key to delete: ";
            cin >> key;
            hashTable.remove(key);
            cout << "Key " << key << " deleted successfully.\n";
            break;

        case 3: // Search Key
            cout << "Enter key to search: ";
            cin >> key;
            if (hashTable.search(key))
                cout << "Key " << key << " found in the hash table.\n";
            else
                cout << "Key " << key << " not found.\n";
            break;

        case 4: // Display Table
            cout << "Hash Table:\n";
            hashTable.display();
            break;

        case 5: // Return to Main Menu
            return;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}

void heapMenu()
{
    int choice, type, value;

    cout << "Select Heap Type:\n";
    cout << "1. Max Heap\n";
    cout << "2. Min Heap\n";
    cout << "Enter choice: ";
    cin >> type;

    if (type == 1) // Max Heap
    {
        MaxHeap<int> maxHeap;

        while (true)
        {
            cout << "\nMax Heap Operations Menu:\n";
            cout << "1. Insert Element\n";
            cout << "2. Extract Maximum\n";
            cout << "3. Print Heap\n";
            cout << "4. Return to Main Menu\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1: // Insert Element
                cout << "Enter value to insert: ";
                cin >> value;
                maxHeap.insert(value);
                cout << "Value " << value << " inserted successfully.\n";
                break;

            case 2: // Extract Maximum
                try
                {
                    cout << "Maximum element extracted: " << maxHeap.extractMax() << endl;
                }
                catch (runtime_error &e)
                {
                    cout << e.what() << endl;
                }
                break;

            case 3: // Print Heap
                cout << "Heap elements: ";
                maxHeap.printHeap();
                break;

            case 4: // Exit
                return;

            default:
                cout << "Invalid choice! Please try again.\n";
            }
        }
    }
    else if (type == 2) // Min Heap
    {
        MinHeap<int> minHeap;

        while (true)
        {
            cout << "\nMin Heap Operations Menu:\n";
            cout << "1. Insert Element\n";
            cout << "2. Extract Minimum\n";
            cout << "3. Print Heap\n";
            cout << "4. Return to Main Menu\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1: // Insert Element
                cout << "Enter value to insert: ";
                cin >> value;
                minHeap.insert(value);
                cout << "Value " << value << " inserted successfully.\n";
                break;

            case 2: // Extract Minimum
                try
                {
                    cout << "Minimum element extracted: " << minHeap.extractMin() << endl;
                }
                catch (runtime_error &e)
                {
                    cout << e.what() << endl;
                }
                break;

            case 3: // Print Heap
                cout << "Heap elements: ";
                minHeap.printHeap();
                break;

            case 4: // Exit
                return;

            default:
                cout << "Invalid choice! Please try again.\n";
            }
        }
    }
    else
    {
        cout << "Invalid heap type! Returning to main menu.\n";
    }
}

void sortingMenu()
{
    Sorting<int> sorting; // Sorting object for integers
    int choice, size;

    cout << "Enter size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        cout << "\nSorting Algorithms Menu:\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Selection Sort\n";
        cout << "3. Insertion Sort\n";
        cout << "4. Quick Sort\n";
        cout << "5. Merge Sort\n";
        cout << "6. Display Array\n";
        cout << "7. Return to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: // Bubble Sort
            sorting.bubbleSort(arr, size);
            cout << "Array sorted using Bubble Sort.\n";
            break;

        case 2: // Selection Sort
            sorting.selectionSort(arr, size);
            cout << "Array sorted using Selection Sort.\n";
            break;

        case 3: // Insertion Sort
            sorting.insertionSort(arr, size);
            cout << "Array sorted using Insertion Sort.\n";
            break;

        case 4: // Quick Sort
            sorting.quickSort(arr, 0, size - 1);
            cout << "Array sorted using Quick Sort.\n";
            break;

        case 5: // Merge Sort
            sorting.mergeSort(arr, 0, size - 1);
            cout << "Array sorted using Merge Sort.\n";
            break;

        case 6: // Display Array
            cout << "Current Array: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 7: // Return to Main Menu
            return;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}

void treeMenu()
{
    int choice, value;

    // Binary Tree Object
    BinaryTree<int> binaryTree;

    // AVL Tree Object
    AVLTree<int> avlTree;

    cout << "\nSelect Tree Type:\n";
    cout << "1. Binary Tree\n";
    cout << "2. AVL Tree\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) // Binary Tree Menu
    {
        while (true)
        {
            cout << "\nBinary Tree Operations Menu:\n";
            cout << "1. Insert Element\n";
            cout << "2. Inorder Traversal\n";
            cout << "3. Preorder Traversal\n";
            cout << "4. Postorder Traversal\n";
            cout << "5. Return to Main Menu\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1: // Insert Element
                cout << "Enter value to insert: ";
                cin >> value;
                binaryTree.insert(value);
                cout << "Value " << value << " inserted successfully.\n";
                break;

            case 2: // Inorder Traversal
                cout << "Inorder Traversal: ";
                binaryTree.displayInorder();
                break;

            case 3: // Preorder Traversal
                cout << "Preorder Traversal: ";
                binaryTree.displayPreorder();
                break;

            case 4: // Postorder Traversal
                cout << "Postorder Traversal: ";
                binaryTree.displayPostorder();
                break;

            case 5: // Return to Main Menu
                return;

            default:
                cout << "Invalid choice! Please try again.\n";
            }
        }
    }
    else if (choice == 2) // AVL Tree Menu
    {
        while (true)
        {
            cout << "\nAVL Tree Operations Menu:\n";
            cout << "1. Insert Element\n";
            cout << "2. Inorder Traversal\n";
            cout << "3. Return to Main Menu\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1: // Insert Element
                cout << "Enter value to insert: ";
                cin >> value;
                avlTree.insert(value);
                cout << "Value " << value << " inserted successfully (AVL balanced).\n";
                break;

            case 2: // Inorder Traversal
                cout << "Inorder Traversal: ";
                avlTree.displayInorder();
                break;

            case 3: // Return to Main Menu
                return;

            default:
                cout << "Invalid choice! Please try again.\n";
            }
        }
    }
    else
    {
        cout << "Invalid tree type! Returning to main menu.\n";
    }
}

int main()
{
    cout << "Welcome to Data Structures Library Demo!\n"
         << "This program demonstrates various data structure implementations\n"
         << "using a custom Data type with integer and character fields.\n\n";

    int choice;
    while (true)
    {
        cout << "\nMain Menu:\n"
             << "1. Linked List\n"
             << "2. Dynamic Stack\n"
             << "3. Dynamic Queue\n"
             << "4. Static Stack\n"
             << "5. Static Queue\n"
             << "6. Arrays\n"
             << "7. Graphs\n"
             << "8. Hashing\n"
             << "9. Heaps\n"
             << "10. Sorting\n"
             << "11. Trees\n"
             << "12. Exit\n"
             << "Enter choice: ";

        cin >> choice;

        switch (choice)
        {
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
            arrayMenu();
        case 7:
            graphMenu();
        case 8:
            hashingMenu();
        case 9:
            heapMenu();
        case 10:
            sortingMenu();
        case 11:
            treeMenu();
        case 12:
            cout << "Thank you for using Data Structures Library Demo!\n";
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }
}
