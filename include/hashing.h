// hashing.h - Header file for Hashing Algorithms
#ifndef HASHING_H
#define HASHING_H

#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename T>
class HashTable
{
private:
    int capacity;            // Table size
    vector<list<int>> table; // Hash table using chaining

    // Hash function
    int hashFunction(int key)
    {
        return key % capacity;
    }

public:
    // Constructor
    HashTable(int size) : capacity(size)
    {
        table.resize(capacity);
    }

    // Insert key
    void insert(int key)
    {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    // Delete key
    void remove(int key)
    {
        int index = hashFunction(key);
        table[index].remove(key);
    }

    // Search key
    bool search(int key)
    {
        int index = hashFunction(key);
        for (int item : table[index])
        {
            if (item == key)
            {
                return true;
            }
        }
        return false;
    }

    // Display Hash Table
    void display()
    {
        for (int i = 0; i < capacity; i++)
        {
            cout << "Bucket " << i << ": ";
            for (int item : table[i])
            {
                cout << item << " -> ";
            }
            cout << "NULL\n";
        }
    }
};

#endif
