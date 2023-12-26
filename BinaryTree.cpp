//
//  BinaryTree.cpp
//  Binary Tree
//
//  Created by Macbook on 26/12/2023.
//

#include "BinaryTree.hpp"


BinaryTree::BinaryTree() {
    root = NULL;
    count = 0;
}

BinaryTree::~BinaryTree() {
    delete root;
}

void BinaryTree::insert(int num) {
    TreeNode* newNode = new TreeNode();
    newNode->setData(num);
    
    if(root == NULL){
        root = newNode;
        count++;
        
        cout<<"\nThe new node is inerted successfully.";
    }
    
    TreeNode *temp = root;
    TreeNode *current = root;
    
    while (current != nullptr)
    {
        
        if (num < current->getData())
        {
            current = current->getLeft();
        }
        else
        {
            current = current->getRight();
        }
        temp = current;
    }

    if (num < temp->getData())
    {
        temp->setLeft(newNode);
        cout<<"\nThe new node is inserted successfully.";
    }
//    else
    {
        temp->setRight(newNode);
        cout<<"\nThe new node is inserted successfully.";
    }

}

void BinaryTree::display() {
    if(root == NULL) {
        cout<<"\nThe tree is empty.";
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

