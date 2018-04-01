#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <algorithm>
#include "Node.h"
#include "AvlTree.h"
#include "StringManager.h"

using namespace std;
int main()
{

    StringManager manager;

    manager.stringStripper("123hi");

    Node* root = nullptr;
    AvlTree tree;
    ifstream file;
    file.open("dictionary.txt");
    string word;

    //Feeding the dictionary into the AVL tree
    if(!file.is_open())
    {
        cout << "error happen :C"<< endl;
    }
    else
    {
        while(file >> word)
        {
            root = tree.insertNode(root, word);
        }
    }
    file.close();






    //tree.preOrderTree(root);


    return 0;

}

