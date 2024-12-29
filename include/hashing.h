// hashing.h - Header file for Hashing Algorithms
#ifndef HASHING_H
#define HASHING_H

#include <iostream>
using namespace std;

#define MAX_SIZE 100

template <typename T>
class HashTable
{
private:
    int capacity;
    T table[MAX_SIZE][MAX_SIZE]; // Hash table using chaining with fixed-size 2D array
    int sizes[MAX_SIZE];         // Stores the size of each bucket

    // Hash function
    int hashFunction(T key)
    {
        return static_cast<int>(key) % capacity;
    }

public:
    // Constructor
    HashTable(int size) : capacity(size)
    {
        for (int i = 0; i < capacity; i++)
        {
            sizes[i] = 0;
        }
    }

    // Insert key
    void insert(T key)
    {
        int index = hashFunction(key);
        table[index][sizes[index]++] = key;
    }

    // Delete key
    void remove(T key)
    {
        int index = hashFunction(key);
        for (int i = 0; i < sizes[index]; i++)
        {
            if (table[index][i] == key)
            {
                for (int j = i; j < sizes[index] - 1; j++)
                {
                    table[index][j] = table[index][j + 1];
                }
                sizes[index]--;
                break;
            }
        }
    }

    // Search key
    bool search(T key)
    {
        int index = hashFunction(key);
        for (int i = 0; i < sizes[index]; i++)
        {
            if (table[index][i] == key)
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
            for (int j = 0; j < sizes[i]; j++)
            {
                cout << table[i][j] << " -> ";
            }
            cout << "NULL\n";
        }
    }
};

#endif
