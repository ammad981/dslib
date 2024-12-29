# dslib

A comprehensive collection of commonly used data structures and algorithms implemented as header-only C++ libraries. These implementations focus on simplicity, efficiency, and ease of use while maintaining modern C++ practices.

---

## **Overview**

dslib provides template-based implementations of fundamental data structures and algorithms, making them type-safe and reusable across different data types. All implementations are header-only, eliminating the need for separate compilation and simplifying integration into your projects.

---

## **Available Data Structures and Algorithms**

### **1. Linked List** (`list.h`):

- Singly-linked list implementation.
- Supports insertion/deletion at the **beginning**, **end**, and **arbitrary positions**.
- Forward traversal and searching capabilities.
- Template-based for any data type.

### **2. Queue**:

- **Dynamic Queue** (`dqueue.h`): FIFO container using linked list.
  - Efficient enqueue and dequeue operations.
  - Front and rear access.
  - Unlimited size.
- **Static Queue** (`squeue.h`): FIFO container using array.
  - Fixed-size implementation.
  - Circular array for space efficiency.
  - Size tracking.

### **3. Stack**:

- **Dynamic Stack** (`dstack.h`): LIFO container using linked list.
  - Push and pop operations.
  - Top element access.
  - Unlimited size.
- **Static Stack** (`sstack.h`): LIFO container using array.
  - Fixed-size implementation.
  - Efficient memory usage.
  - Size tracking.

### **4. Graphs** (`graphs.h`):

- Implements **BFS (Breadth-First Search)** and **DFS (Depth-First Search)** algorithms.
- **Dijkstra's Algorithm** for shortest path calculation.
- Supports **weighted and unweighted edges**.
- Adjacency matrix representation.

### **5. Hashing** (`hashing.h`):

- Implements **hash table** with **chaining** for collision handling.
- Basic operations:
  - Insert.
  - Search.
  - Delete.
- Template-based for flexible data types.

### **6. Heaps** (`heap.h`):

- **Max Heap** and **Min Heap** implementations.
- Supports operations:
  - Insert.
  - Extract Max/Min.
  - Print Heap.
- Useful for **priority queues** and **sorting algorithms**.

### **7. Sorting Algorithms** (`sorting.h`):

- **Bubble Sort**: Simple sorting with `O(n^2)` complexity.
- **Selection Sort**: Finds the minimum element in each pass.
- **Insertion Sort**: Builds the sorted array one item at a time.
- **Quick Sort**: Efficient `O(n log n)` divide-and-conquer sorting.
- **Merge Sort**: Recursive `O(n log n)` sorting using merging.

### **8. Trees** (`trees.h`):

- **Binary Trees**:
  - Insertion and traversal (Inorder, Preorder, Postorder).
- **AVL Trees**:
  - Self-balancing tree with rotations.
  - Supports insertion with rebalancing.
  - Inorder traversal for sorted outputs.

---

## **Features**

- **Header-Only**: Just include and use.
- **Template-Based**: Works with any data type.
- **Memory Efficient**: Static and dynamic implementations.
- **Modern C++ Design**: Utilizes C++11 and later features.
- **Algorithms Support**: Includes graph traversal, hashing, heaps, and sorting.
- **Interactive Menu System**: Allows users to test and explore data structures in real-time.
- **Exception Handling**: Robust implementation for edge cases.

---

## **Usage**

### **Installation**

Simply copy the header files into your project and include them:

```cpp
#include "list.h"
#include "dqueue.h"
#include "squeue.h"
#include "dstack.h"
#include "sstack.h"
#include "graphs.h"
#include "hashing.h"
#include "heap.h"
#include "sorting.h"
#include "trees.h"
```

### **Basic Examples**

#### **Using Graphs**

```cpp
Graph<int> graph(5);
graph.addEdge(0, 1, 10);
graph.BFS(0);
```

#### **Using Hash Table**

```cpp
HashTable<int> hashTable(10);
hashTable.insert(25);
hashTable.display();
```

#### **Using AVL Tree**

```cpp
AVLTree<int> avl;
avl.insert(30);
avl.insert(20);
avl.displayInorder();
```

---

## **Requirements**

- **C++11 or later**.
- Any standard **C++ compiler** (GCC, Clang, MSVC).
- **CMake** for build configuration.

---

## **Future Enhancements**

- **File Handling**: Save and load data structures.
- **Graph Visualization**: Support for exporting graphs to visualization tools.
- **Dynamic Resizing**: Expandable arrays and hash tables.
- **Deletion in Trees**: Implement delete operations for Binary and AVL trees.
- **More Algorithms**:
  - **Prim's and Kruskal's MST algorithms**.
  - **Bellman-Ford and Floyd-Warshall shortest paths**.

---

## **License**

This project is licensed under the **MIT License** - see the LICENSE file for details.

---

## **Contact**

For **bug reports** and **feature requests**, please use the **GitHub issue tracker**.

---

This project serves as a **learning/educational resource** and is designed for exploring **data structures and algorithms concepts** interactively. Contributions and suggestions for improvement are welcome!
