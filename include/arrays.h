// arrays.h - Header file for Arrays and Searching Algorithms
#ifndef ARRAYS_H
#define ARRAYS_H

#include <iostream>
using namespace std;

// Single Array Operations
void singleArrayOperations()
{
    int arr[100], n, choice, pos, value;

    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        cout << "\nSingle Array Operations:\n";
        cout << "1. Insert\n2. Delete\n3. Traverse\n4. Linear Search\n5. Binary Search\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: // Insert
            cout << "Enter position and value: ";
            cin >> pos >> value;
            if (pos > n || pos < 0)
            {
                cout << "Invalid position!\n";
            }
            else
            {
                for (int i = n; i > pos; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;
            }
            break;

        case 2: // Delete
            cout << "Enter position to delete: ";
            cin >> pos;
            if (pos >= n || pos < 0)
            {
                cout << "Invalid position!\n";
            }
            else
            {
                for (int i = pos; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
            }
            break;

        case 3: // Traverse
            cout << "Array elements: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 4:
        { // Linear Search
            int key;
            cout << "Enter value to search: ";
            cin >> key;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == key)
                {
                    cout << "Element found at position: " << i << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Element not found!\n";
            break;
        }

        case 5:
        { // Binary Search
            int key;
            cout << "Enter value to search: ";
            cin >> key;
            int left = 0, right = n - 1, mid;
            bool found = false;
            while (left <= right)
            {
                mid = (left + right) / 2;
                if (arr[mid] == key)
                {
                    cout << "Element found at position: " << mid << endl;
                    found = true;
                    break;
                }
                else if (arr[mid] < key)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
            if (!found)
                cout << "Element not found!\n";
            break;
        }

        case 6:
            return;

        default:
            cout << "Invalid choice!\n";
        }
    }
}

// 2D Array Operations
void twoDArrayOperations()
{
    int mat1[10][10], mat2[10][10], res[10][10];
    int r1, c1, r2, c2, choice;

    cout << "Enter rows and columns of Matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter rows and columns of Matrix 2: ";
    cin >> r2 >> c2;
    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    while (true)
    {
        cout << "\n2D Array Operations:\n";
        cout << "1. Addition\n2. Multiplication\n3. Transpose\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: // Addition
            if (r1 != r2 || c1 != c2)
            {
                cout << "Addition not possible!\n";
            }
            else
            {
                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c1; j++)
                    {
                        res[i][j] = mat1[i][j] + mat2[i][j];
                    }
                }
                cout << "Resultant Matrix:\n";
                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c1; j++)
                    {
                        cout << res[i][j] << " ";
                    }
                    cout << endl;
                }
            }
            break;

        case 2: // Multiplication
            if (c1 != r2)
            {
                cout << "Multiplication not possible!\n";
            }
            else
            {
                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c2; j++)
                    {
                        res[i][j] = 0;
                        for (int k = 0; k < c1; k++)
                        {
                            res[i][j] += mat1[i][k] * mat2[k][j];
                        }
                    }
                }
                cout << "Resultant Matrix:\n";
                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c2; j++)
                    {
                        cout << res[i][j] << " ";
                    }
                    cout << endl;
                }
            }
            break;

        case 3: // Transpose
            cout << "Transpose of Matrix 1:\n";
            for (int i = 0; i < c1; i++)
            {
                for (int j = 0; j < r1; j++)
                {
                    cout << mat1[j][i] << " ";
                }
                cout << endl;
            }
            break;

        case 4:
            return;

        default:
            cout << "Invalid choice!\n";
        }
    }
}

#endif
