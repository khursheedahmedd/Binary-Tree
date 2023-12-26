//
//  TreeNode.hpp
//  Binary Tree
//
//  Created by Macbook on 26/12/2023.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp
#include <iostream>

using namespace std;

class TreeNode {
private:
    int data;
    TreeNode* left;
    TreeNode* right;
    
public:
    TreeNode();
    ~TreeNode();
    
    void setData(int);
    int getData();
    void setLeft(TreeNode* node);
    TreeNode* getLeft();
    void setRight(TreeNode* node);
    TreeNode* getRight();
};

#endif /* TreeNode_hpp */
