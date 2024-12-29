// sorting.h - Header file for Sorting Algorithms
// Author: Muhammad Umar 2212445

#ifndef SORTING_H
#define SORTING_H

#include <iostream>
using namespace std;

template <typename T>
class Sorting
{
public:
    // Bubble Sort
    void bubbleSort(T arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    // Selection Sort
    void selectionSort(T arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int minIdx = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIdx])
                {
                    minIdx = j;
                }
            }
            swap(arr[i], arr[minIdx]);
        }
    }

    // Insertion Sort
    void insertionSort(T arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            T key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    // Quick Sort
    void quickSort(T arr[], int low, int high)
    {
        if (low < high)
        {
            T pivot = arr[high];
            int i = low - 1;
            for (int j = low; j < high; j++)
            {
                if (arr[j] < pivot)
                {
                    i++;
                    swap(arr[i], arr[j]);
                }
            }
            swap(arr[i + 1], arr[high]);
            int pi = i + 1;
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    // Merge Sort
    void merge(T arr[], int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;
        T L[n1], R[n2];

        for (int i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];

        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }

        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    void mergeSort(T arr[], int l, int r)
    {
        if (l < r)
        {
            int m = l + (r - l) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
};

#endif