//
//  BinaryTree.hpp
//  Binary Tree
//
//  Created by Macbook on 26/12/2023.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp
#include "TreeNode.hpp"

class BinaryTree {
private:
    int count;
    TreeNode* root;
    
public:
    BinaryTree();
    ~BinaryTree();
    
    void insert(int);
    void display();
    void search(int);
    int findMin();
    int findMax();
};

#endif /* BinaryTree_hpp */
