//
//  BinaryTree.cpp
//  Binary Tree
//
//  Created by Macbook on 26/12/2023.
//

#include "BinaryTree.hpp"

BinaryTree::BinaryTree()
{
    root = NULL;
    count = 0;
}

BinaryTree::~BinaryTree()
{
    delete root;
}

void BinaryTree::insert(int num)
{
    TreeNode *newNode = new TreeNode();
    newNode->setData(num);

    if (root == nullptr)
    {
        root = newNode;
        std::cout << "\nThe new node is inserted successfully.";
        return;
    }

    //    TreeNode* temp = root;
    TreeNode *current = root;
    TreeNode *parent = nullptr;

    while (current != nullptr)
    {
        parent = current;
        if (num < current->getData())
        {
            current = current->getLeft();
        }
        else if (num > current->getData())
        {
            current = current->getRight();
        }
        else
        {
            std::cout << "\nNode with the same value already exists.";
            return;
        }
    }

    if (num < parent->getData())
    {
        parent->setLeft(newNode);
    }
    else
    {
        parent->setRight(newNode);
    }

    // std::cout << "\nThe new node is inserted successfully.";
}

void BinaryTree::display()
{
    if (root == NULL)
    {
        cout << "\nThe tree is empty.";
        return;
    }

    TreeNode *current = root;
    TreeNode *pre;

    while (current != nullptr)
    {
        if (current->getLeft() == nullptr)
        {
            cout << current->getData() << " ";
            current = current->getRight();
        }
        else
        {
            pre = current->getLeft();
            while (pre->getRight() != nullptr && pre->getRight() != current)
            {
                pre = pre->getRight();
            }

            if (pre->getRight() == nullptr)
            {
                pre->setRight(current);
                current = current->getLeft();
            }
            else
            {
                pre->setRight(NULL);
                cout << current->getData() << " ";
                current = current->getRight();
            }
        }
    }
    cout << endl;
}

void BinaryTree::search(int num)
{
    if (root == nullptr)
    {
        cout << "\nThe tree is empty.";
        return;
    }

    TreeNode *temp = root;
    while (temp != nullptr)
    {
        if (num == temp->getData())
        {
            cout << "\nFound " << num << " in the tree.";
            return;
        }
        else if (num < temp->getData())
        {
            temp = temp->getLeft();
        }
        else
        {
            temp = temp->getRight();
        }
    }

    cout << "\n"
         << num << " not found in the tree.";
}

int BinaryTree::findMin()
{
    if (root == nullptr)
    {
        std::cout << "\nThe tree is empty.";
        return INT_MIN;
    }

    TreeNode *current = root;
    while (current->getLeft() != nullptr)
    {
        current = current->getLeft();
    }

    return current->getData();
}

int BinaryTree::findMax()
{
    if (root == nullptr)
    {
        std::cout << "\nThe tree is empty.";
        return INT_MAX;
    }

    TreeNode *current = root;
    while (current->getRight() != nullptr)
    {
        current = current->getRight();
    }

    return current->getData();
}
