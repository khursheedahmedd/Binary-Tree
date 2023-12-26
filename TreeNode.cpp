//
//  TreeNode.cpp
//  Binary Tree
//
//  Created by Macbook on 26/12/2023.
//

#include "TreeNode.hpp"


TreeNode::TreeNode() {
    data = 0;
    left = NULL;
    right = NULL;
}

TreeNode::~TreeNode() {
    delete left;
    delete right;
}

void TreeNode::setData(int num) {
    data = num;
}
int TreeNode::getData() {
    return data;
}

void TreeNode::setLeft(TreeNode* node) {
    left = node;
}
TreeNode* TreeNode::getLeft() {
    return left;
}

void TreeNode::setRight(TreeNode* node) {
    right = node;
}
TreeNode* TreeNode::getRight() {
    return right;
}

