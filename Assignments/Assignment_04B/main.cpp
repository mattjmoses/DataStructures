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

    string str = manager.stringStripper("billium.");
    cout << str << endl;
    bool search;
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

    search = tree.searchTree("quotationn",root);


    cout << search << endl;

   // tree.preOrderTree(root);


    return 0;

}

