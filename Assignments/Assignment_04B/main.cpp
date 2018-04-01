#include <iostream>
#include <string>
#include "Node.h"
#include "AvlTree.h"

using namespace std;
int main()
{

    string cool = "marppp";
    string zop = "marpp";

    if(cool > zop)
    {
        cout<< cool << endl;
    }
    else
    {
        cout << zop << endl;
    }
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