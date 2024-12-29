// trees.h - Header file for Tree Algorithms
// Author: Ammad Qureshi 2312213

#ifndef TREES_H
#define TREES_H

#include <iostream>
using namespace std;

// Binary Tree Node
template <typename T>
struct TreeNode
{
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T value) : data(value), left(nullptr), right(nullptr) {}
};

// Binary Tree Template
template <typename T>
class BinaryTree
{
private:
    TreeNode<T> *root;

    // Helper function for insertion
    TreeNode<T> *insert(TreeNode<T> *node, T value)
    {
        if (!node)
            return new TreeNode<T>(value);
        if (value < node->data)
            node->left = insert(node->left, value);
        else
            node->right = insert(node->right, value);
        return node;
    }

    // Inorder Traversal
    void inorder(TreeNode<T> *node)
    {
        if (node)
        {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

    // Preorder Traversal
    void preorder(TreeNode<T> *node)
    {
        if (node)
        {
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    // Postorder Traversal
    void postorder(TreeNode<T> *node)
    {
        if (node)
        {
            postorder(node->left);
            postorder(node->right);
            cout << node->data << " ";
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(T value)
    {
        root = insert(root, value);
    }

    void displayInorder()
    {
        inorder(root);
        cout << endl;
    }

    void displayPreorder()
    {
        preorder(root);
        cout << endl;
    }

    void displayPostorder()
    {
        postorder(root);
        cout << endl;
    }
};

// AVL Tree Template
template <typename T>
class AVLTree
{
private:
    struct AVLNode
    {
        T data;
        AVLNode *left;
        AVLNode *right;
        int height;

        AVLNode(T value) : data(value), left(nullptr), right(nullptr), height(1) {}
    };

    AVLNode *root;

    int height(AVLNode *node)
    {
        return node ? node->height : 0;
    }

    int balanceFactor(AVLNode *node)
    {
        return height(node->left) - height(node->right);
    }

    AVLNode *rotateRight(AVLNode *y)
    {
        AVLNode *x = y->left;
        AVLNode *T2 = x->right;
        x->right = y;
        y->left = T2;
        y->height = max(height(y->left), height(y->right)) + 1;
        x->height = max(height(x->left), height(x->right)) + 1;
        return x;
    }

    AVLNode *rotateLeft(AVLNode *x)
    {
        AVLNode *y = x->right;
        AVLNode *T2 = y->left;
        y->left = x;
        x->right = T2;
        x->height = max(height(x->left), height(x->right)) + 1;
        y->height = max(height(y->left), height(y->right)) + 1;
        return y;
    }

    AVLNode *insert(AVLNode *node, T value)
    {
        if (!node)
            return new AVLNode(value);
        if (value < node->data)
            node->left = insert(node->left, value);
        else if (value > node->data)
            node->right = insert(node->right, value);
        else
            return node;

        node->height = 1 + max(height(node->left), height(node->right));

        int balance = balanceFactor(node);

        if (balance > 1 && value < node->left->data)
            return rotateRight(node);
        if (balance < -1 && value > node->right->data)
            return rotateLeft(node);
        if (balance > 1 && value > node->left->data)
        {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
        if (balance < -1 && value < node->right->data)
        {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }

        return node;
    }

    void inorder(AVLNode *node)
    {
        if (node)
        {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

public:
    AVLTree() : root(nullptr) {}

    void insert(T value)
    {
        root = insert(root, value);
    }

    void displayInorder()
    {
        inorder(root);
        cout << endl;
    }
};

#endif
