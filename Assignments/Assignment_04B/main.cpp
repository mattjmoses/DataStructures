#include <iostream>
#include "AvlTree.h"
#include "Node.h"
int main()
{
    Node* root = nullptr;
    AvlTree test;

    root = test.insertNode(root,10);
    root = test.insertNode(root,20);
    root = test.insertNode(root,6);
    root = test.insertNode(root,8);
    root = test.insertNode(root,80);
   // root = test.insertNode(root,40);
//    root = test.insertNode(root,50);
//    root = test.insertNode(root,5);
//    root = test.insertNode(root,1);


    test.preOrderTree(root);




    return 0;
}