#include <iostream>
#include <string>
#include "Node.h"
#include "AvlTree.h"

using namespace std;
int main()
{


    Node* root = nullptr;
    AvlTree test;

    root = test.insertNode(root, "Bill");
    root = test.insertNode(root, "Hooplaw");
    root = test.insertNode(root, "Garbage");
    root = test.insertNode(root, "Apple");
    root = test.insertNode(root, "Zork");
    root = test.insertNode(root, "Hello");
    root = test.insertNode(root, "Dolly Parton");




    test.preOrderTree(root);





    return 0;

}