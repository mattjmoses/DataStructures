//
// Created by matt on 16/04/18.
//

#include "SpellChecker.h"
#include "SpellChecker.h"
#include "StringManager.h"
#include "HashTabl.h"

SpellChecker::SpellChecker() = default;

SpellChecker::~SpellChecker() = default;

//This reads in a given text file and a dictionary and saves out any misspelled words in
//a separate text file
void SpellChecker::CheckSpelling(string textFile, string dictionary)
{
    StringManager manager;

    //
    bool search;
    HashTabl table;
    Node * inWord;

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
            //Trying to tamp down on collisions by searching the table to see if the word is already
            //present. If it IS, we skip it and move on to the next one.
            if(table.getItemByKey(word))
            {
                continue;
            }
            else
                {
                    //Here's a new null containing the word from the dictionary.
                    inWord = new Node{word, nullptr};
                    //And so we insert the word.
                    table.insertItem(inWord);

                }



        }
    }
    file.close();
    table.printTable();
    cout<<endl;
    cout<<"======================================================================================================"<<endl;
    cout<<"======================================================================================================"<<endl;
    table.pringHashTable();
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

                //Here now we're checking the words against the dictionary
                if(!(search= table.getItemByKey(cleanedWord)))
                {
                    RecordWrongWords(cleanedWord);
                }
            }

        }
        file02.close();
    }
    //search = tree.searchTree("quotationn",root);


    //cout << search << endl;
    //SO we need to print out our hash table at the end.
    //tree.preOrderTree(root);




}

//Recording misspelled words.
void SpellChecker::RecordWrongWords(string badWord)
{
    fstream bad("badWords.txt", ios::in | ios::out | ios::app);

    if(!bad.is_open())
    {
        cout << "error happen";
    }
    else
    {
        //Recording the mispelled words to an external file.
        bad<< badWord << endl;

        bad.close();
    }
}

