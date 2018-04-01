#include <iostream>

#include "Node.h"
#include "AvlTree.h"
int main() {

    Node* root = nullptr;
    AvlTree test;

    root = test.insertNode(root, 10);
    root = test.insertNode(root, 20);
    root = test.insertNode(root, 30);
    root = test.insertNode(root, 40);
    root = test.insertNode(root, 50);
    root = test.insertNode(root, 25);




    test.preOrderTree(root);





    return 0;

}