//
// Created by matt on 16/04/18.
//

#ifndef ASSIGNMENT_05_ROUND_02_HASHTABL_H
#define ASSIGNMENT_05_ROUND_02_HASHTABL_H

#include "LinkedList_The_Revenge.h"

class HashTabl
{
    private:

    //Our array of linked lists
    LinkedList_The_Revenge * array;

    //Size of the hash table array
    int length;

    //Our hashing function
    int hash(string itemKey);

    public:

    //The ol defult constructor. Setting the table length
    //to 13 to start.
    HashTabl(int tableLength = 13);

    //The ol default destructor
    ~HashTabl();

    //Adds a new item to the hash table
    void insertItem(Item *newItem);

    //Removes an item from the hash table
    bool removeItem(string itemKey);

    //Find an item in the hash table
    Item * getItemByKey(string itemKey);

    //Displays the contents of our hash table
    void printTable();

    //Displays the baby developing
    void printHistogram();

    //Returns the lenghth of our venerable hash table
    int getLength();

    //Returns the number of items stored in the hash table
    int getNumberOfItems();


};


#endif //ASSIGNMENT_05_ROUND_02_HASHTABL_H
