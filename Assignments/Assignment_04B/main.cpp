#include <iostream>
#include "AVLTree.h"

int main()
{
    Node *t , *p;
    AVLTree test;
    int i;
    int j = 0;
    const int max = 10;

    printf("--- C AVL Tree Demo  ---\n");

    t = nullptr;


    t = test.insert( 10, t );
    t = test.insert( 20, t );
    t = test.insert( 30, t );
    t = test.insert( 40, t );
    t = test.insert( 50, t );
    t = test.insert( 25, t );


    printf(" into the tree\n\n");

    test.displayTree(t);

    test.deleteTree(t);

    return 0;





    return 0;
}