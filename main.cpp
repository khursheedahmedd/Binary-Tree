//
//  main.cpp
//  Binary Tree
//
//  Created by Macbook on 26/12/2023.
//

#include "BinaryTree.hpp"

int main() {
    
    BinaryTree* tree = new BinaryTree();
    
    int choice;
    char ch = 'y';
    
    do {
        cout<<"\n******* Binary Tree ********";
        cout<<"\n* 1. Insert a node         *";
        cout<<"\n* 2. Display Tree          *";
        cout<<"\n* 3. Search                *";
        cout<<"\n* 4. Find Minimum          *";
        cout<<"\n* 5. Find Maximum          *";
        cout<<"\n* 6. Exit                  *";
        cout<<"\n****************************";
        cout<<"\nEnter your choiec: ";
        cin>>choice;
        
        switch(choice) {
            case 1: {
                int num;
                cout<<"\nEntre a number to insert: ";
                cin>>num;
                
                tree->insert(num);
                break;
            }
            case 2: {
                tree->display();
                break;
            }
            case 3: {
                int num;
                cout<<"\nEnter a number to search: ";
                cin>>num;
                tree->search(num);
                break;
            }
            case 4: {
                cout<<"\nMinimum number is: "<<tree->findMin();
                break;
            }
            case 5: {
                cout<<"\nThe Maximum number is: "<<tree->findMax();
                break;
            }
            case 6: {
                cout<<"\nExiting....\n";
                return 0;
            }
            default:
                cout<<"\nInvalid choice.";
        }
        cout<<"\nDo you want to repeat? Press Y: ";
        cin>>ch;
    }while(ch == 'Y' || ch == 'y');
    
    delete tree;
    
    return 0;
}
