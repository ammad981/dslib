# dslib

A comprehensive collection of commonly used data structures implemented as header-only C++ libraries. These implementations focus on simplicity, efficiency, and ease of use while maintaining modern C++ practices.

## Overview

dslib provides template-based implementations of fundamental data structures, making them type-safe and reusable across different data types. All implementations are header-only, eliminating the need for separate compilation and simplifying integration into your projects.

## Available Data Structures

- **Linked List**: A singly-linked list implementation (`list.h`)
  - Supports insertion/deletion at beginning, end, and arbitrary positions
  - Forward traversal
  - Template-based for any data type

- **Queue**:
  - **Dynamic Queue** (`dqueue.h`): FIFO container using linked list
    - Efficient enqueue and dequeue operations
    - Front and rear access
    - Unlimited size
  - **Static Queue** (`squeue.h`): FIFO container using array
    - Fixed-size implementation
    - Circular array for space efficiency
    - Size tracking

- **Stack**:
  - **Dynamic Stack** (`dstack.h`): LIFO container using linked list
    - Push and pop operations
    - Top element access
    - Unlimited size
  - **Static Stack** (`sstack.h`): LIFO container using array
    - Fixed-size implementation
    - Efficient memory usage
    - Size tracking

## Features

- **Header-Only**: Just include and use
- **Template-Based**: Works with any data type
- **Memory Efficient**: Both static and dynamic implementations
- **Modern C++**: Utilizes C++11 and later features
- **Well-Documented**: Clear documentation and examples

## Usage

### Installation

Simply copy the header files into your project and include them:

```cpp
#include "list.h"
#include "dqueue.h"
#include "squeue.h"
#include "dstack.h"
#include "sstack.h"
```

### Basic Examples

#### Using List
```cpp
List<int> myList;
myList.insertAtBegin(1);
myList.insertAtEnd(2);
myList.printList();
```

#### Using Dynamic Queue
```cpp
DQueue<string> myQueue;
myQueue.enqueue("first");
myQueue.enqueue("second");
cout << myQueue.getFront(); // prints "first"
```

#### Using Static Stack
```cpp
SStack<int> myStack;
myStack.push(100);
myStack.push(200);
cout << myStack.getTop(); // prints 200
```

## Requirements

- C++11 or later
- Any standard C++ compiler (GCC, Clang, MSVC)

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Future Plans

- [ ] Implementation of additional data structures
  - [ ] Binary Search Tree (BST)
  - [ ] Hash Table
  - [ ] Priority Queue/Heap
  - [ ] Graph
- [ ] Comprehensive test coverage using gtest
- [ ] Performance benchmarking and optimization
- [ ] Iterator support for all containers
- [ ] Exception handling for edge cases
- [ ] Documentation improvements
  - [ ] Usage examples

## Contact

For bug reports and feature requests, please use the GitHub issue tracker.

---

Please note that this is a learning/educational project and may not be suitable for production use without thorough testing.