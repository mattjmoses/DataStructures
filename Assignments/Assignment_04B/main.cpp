#include <iostream>
#include <string>
#include <fstream>
#include "Node.h"
#include "AvlTree.h"

using namespace std;
int main()
{
    Node* root = nullptr;
    AvlTree tree;
    ifstream file;
    file.open("dictionary.txt");
    string word;
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








    tree.preOrderTree(root);





    return 0;

}