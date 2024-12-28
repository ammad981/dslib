// trees.h - Header file for Tree Algorithms
#ifndef TREES_H
#define TREES_H

#include <iostream>
using namespace std;

// Binary Search Tree Node
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BST
{
private:
    TreeNode *root;

    // Helper function for insertion
    TreeNode *insert(TreeNode *node, int value)
    {
        if (!node)
            return new TreeNode(value);
        if (value < node->data)
            node->left = insert(node->left, value);
        else
            node->right = insert(node->right, value);
        return node;
    }

    // Inorder Traversal
    void inorder(TreeNode *node)
    {
        if (node)
        {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

    // Preorder Traversal
    void preorder(TreeNode *node)
    {
        if (node)
        {
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    // Postorder Traversal
    void postorder(TreeNode *node)
    {
        if (node)
        {
            postorder(node->left);
            postorder(node->right);
            cout << node->data << " ";
        }
    }

public:
    BST() : root(nullptr) {}

    void insert(int value)
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

    // AVL Tree Implementation
    struct AVLNode
    {
        int data;
        AVLNode *left;
        AVLNode *right;
        int height;

        AVLNode(int value) : data(value), left(nullptr), right(nullptr), height(1) {}
    };

    class AVLTree
    {
    private:
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

        AVLNode *insert(AVLNode *node, int value)
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

        void insert(int value)
        {
            root = insert(root, value);
        }

        void displayInorder()
        {
            inorder(root);
            cout << endl;
        }
    };
};

#endif