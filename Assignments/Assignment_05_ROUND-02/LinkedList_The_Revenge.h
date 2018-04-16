//
// Created by matt on 16/04/18.
//

#ifndef ASSIGNMENT_05_ROUND_02_LINKEDLIST_THE_REVENGE_H
#define ASSIGNMENT_05_ROUND_02_LINKEDLIST_THE_REVENGE_H

#include <iostream>
#include <string>

using namespace std;

//The ol struct which will carry our data on to glory
struct Node
{
    string value;
    //Pointing to the next thing in the thing.
    Node * next;
};

class LinkedList_The_Revenge
{
 private:
    //The head of our mighty linked list
    Node * head;

    //The length of our list of things
    int length;

 public:
    LinkedList_The_Revenge(); //The ol' default constructor
    ~LinkedList_The_Revenge(); //The ol' default destructor

    //Adds a new item to the list
    void insertItem(Node * newItem);

    //Removes an item from the list
    bool removeItem(string itemKey);

    //Searches for an item in the list
    bool getItem(string itemKey);

    //Vomits out the contents of the list
    void printList();

    //Returns the length of the list
    int getLength();

};


#endif //ASSIGNMENT_05_ROUND_02_LINKEDLIST_THE_REVENGE_H
