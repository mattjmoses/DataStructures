#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <algorithm>
#include "Node.h"
#include "AvlTree.h"

using namespace std;
int main()
{
    void stringStripper( string &str, char* toRemove ) {
        for ( unsigned int i = 0; i < strlen(toRemove); ++i ) {
            str.erase( remove(str.begin(), str.end(), toRemove[i]), str.end() );
        }
        cout << str << endl;
    }


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

