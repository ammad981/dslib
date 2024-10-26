# dslib

A comprehensive collection of commonly used data structures implemented as header-only C++ libraries. These implementations focus on simplicity, efficiency, and ease of use while maintaining modern C++ practices.

## Overview

dslib provides template-based implementations of fundamental data structures, making them type-safe and reusable across different data types. All implementations are header-only, eliminating the need for separate compilation and simplifying integration into your projects.

## Available Data Structures

### Linear Data Structures
- **List**: A doubly-linked list implementation
  - Supports insertion/deletion at beginning, end, and arbitrary positions
  - Bidirectional traversal
  - Template-based for any data type

- **Queue**: FIFO (First-In-First-Out) container
  - Efficient enqueue and dequeue operations
  - Front and rear access
  - Size tracking

- **Stack**: LIFO (Last-In-First-Out) container
  - Push and pop operations
  - Top element access
  - Empty state checking

### Hash-Based Structures
- **HashMap**: Key-value pair storage
  - Dynamic resizing
  - Collision handling
  - Efficient key-based lookups
  - Template support for custom key and value types

## Features

- **Header-Only**: Just include and use
- **Template-Based**: Works with any data type
- **Exception Safe**: Proper error handling
- **Memory Efficient**: Optimized memory usage
- **Modern C++**: Utilizes C++11 and later features
- **Well-Documented**: Clear documentation and examples

## Usage

### Installation

Simply copy the header files into your project and include them:

```cpp
#include "list.h"
#include "queue.h"
#include "stack.h"
#include "hashmap.h"
```

### Basic Examples

#### Using List
```cpp
List<int> myList;
myList.insertAtBegin(1);
myList.insertAtEnd(2);
myList.printList();
```

#### Using Queue
```cpp
Queue<string> myQueue;
myQueue.enqueue("first");
myQueue.enqueue("second");
cout << myQueue.getFront(); // prints "first"
```

#### Using HashMap
```cpp
HashMap<string, int> myMap;
myMap.put("key1", 100);
myMap.put("key2", 200);
cout << myMap.get("key1"); // prints 100
```

## Requirements

- C++11 or later
- Any standard C++ compiler (GCC, Clang, MSVC)

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Future Plans

- [ ] Implementation of trees
- [ ] Comprehensive test coverage using gtest
- [ ] Performance improvement using faster algorithms

## Contact

For bug reports and feature requests, please use the GitHub issue tracker.

---

Please note that this is a learning/educational project and may not be suitable for production use without thorough testing.
