//
// Created by mattmoses on 01/04/18.
//

#include "SpellChecker.h"
#include "StringManager.h"
#include "AvlTree.h"

SpellChecker::SpellChecker() = default;

SpellChecker::~SpellChecker() = default;

//This reads in a given text file and a dictionary and saves out any misspelled words in
//a separate text file
void SpellChecker::CheckSpelling(string textFile, string dictionary)
{
    StringManager manager;

    string str = manager.stringStripper("billium.");
    cout << str << endl;
    bool search;
    Node* root = nullptr;
    AvlTree tree;


    ifstream file;
    file.open(dictionary);
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
    //Once our dictionary is pulled into the AVL tree we can check the spelling.

    ifstream file02;
    file02.open(textFile);
    string rawWord;
    string cleanedWord;
    //So now we're looking through the file
    if(!file02.is_open())
    {
        cout << "error happen :C" << endl;
    }
    else
        {
            while(file02 >> rawWord)
            {
                //We're stripping special characters ouf of the words here
                cleanedWord = manager.stringStripper(rawWord);
                //Ignoring all empty strings
                if(cleanedWord != "")
                {
                    cout << cleanedWord << endl;
                }

            }
            file02.close();
        }
    //search = tree.searchTree("quotationn",root);


    //cout << search << endl;

    //tree.preOrderTree(root);

}
