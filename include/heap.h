// heap.h - Header file for Heap Algorithms
// Author: Muhammad Ahmad 2312212

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
using namespace std;

#define MAX_HEAP_SIZE 100

// MaxHeap Class Template
template <typename T>
class MaxHeap
{
private:
    T heap[MAX_HEAP_SIZE];
    int size;

    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    void heapifyUp(int index)
    {
        while (index > 0 && heap[parent(index)] < heap[index])
        {
            swap(heap[index], heap[parent(index)]);
            index = parent(index);
        }
    }

    void heapifyDown(int index)
    {
        int largest = index;
        int left = leftChild(index);
        int right = rightChild(index);

        if (left < size && heap[left] > heap[largest])
            largest = left;

        if (right < size && heap[right] > heap[largest])
            largest = right;

        if (largest != index)
        {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    MaxHeap() : size(0) {}

    void insert(T value)
    {
        if (size >= MAX_HEAP_SIZE)
            throw runtime_error("Heap overflow");

        heap[size++] = value;
        heapifyUp(size - 1);
    }

    T extractMax()
    {
        if (size == 0)
            throw runtime_error("Heap is empty");

        T maxVal = heap[0];
        heap[0] = heap[--size];
        heapifyDown(0);

        return maxVal;
    }

    void printHeap()
    {
        for (int i = 0; i < size; i++)
        {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

// MinHeap Class Template
template <typename T>
class MinHeap
{
private:
    T heap[MAX_HEAP_SIZE];
    int size;

    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    void heapifyUp(int index)
    {
        while (index > 0 && heap[parent(index)] > heap[index])
        {
            swap(heap[index], heap[parent(index)]);
            index = parent(index);
        }
    }

    void heapifyDown(int index)
    {
        int smallest = index;
        int left = leftChild(index);
        int right = rightChild(index);

        if (left < size && heap[left] < heap[smallest])
            smallest = left;

        if (right < size && heap[right] < heap[smallest])
            smallest = right;

        if (smallest != index)
        {
            swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:
    MinHeap() : size(0) {}

    void insert(T value)
    {
        if (size >= MAX_HEAP_SIZE)
            throw runtime_error("Heap overflow");

        heap[size++] = value;
        heapifyUp(size - 1);
    }

    T extractMin()
    {
        if (size == 0)
            throw runtime_error("Heap is empty");

        T minVal = heap[0];
        heap[0] = heap[--size];
        heapifyDown(0);

        return minVal;
    }

    void printHeap()
    {
        for (int i = 0; i < size; i++)
        {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

#endif
