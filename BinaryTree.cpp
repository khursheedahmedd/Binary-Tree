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
    
    TreeNode* temp = root;
    while(temp != NULL) {
        if(num > temp->getData() && temp->getRight() == NULL) {
            temp->setRight(newNode);
            count++;
            
            cout<<"\nThe new node is inserted succussfully.";
        }
        else if (temp->getLeft() == NULL) {
            temp->setLeft(newNode);
            count++;
            
            cout<<"\nThe new node is inserted succussfully.";
        }
        else if(num > temp->getData()) {
            temp = temp->getRight();
        }
        else {
            temp = temp->getLeft();
        }
    }
}


