//
//  main.cpp
//  Binary Tree
//
//  Created by Macbook on 26/12/2023.
//

#include "BinaryTree.hpp"


int main() {
    BinaryTree* tree = new BinaryTree();


    int values[] = {50, 30, 70, 20, 40, 60, 80};
    
    for (int value : values) {
        tree->insert(value);
    }

    cout << "\nDisplaying the tree with hardcoded values:" << endl;
    tree->display();

    delete tree;

    return 0;
}
