//
// Created by matt on 16/04/18.
//

#include "HashTabl.h"


HashTabl::HashTabl(int tableLength)
{
    if(tableLength <= 0)
    {
        tableLength = 13;
    }
    //Here we're setting a new array of linked lists
    array = new LinkedList_The_Revenge[tableLength];
    length = tableLength;

}


HashTabl::~HashTabl() {

}

//Here now is our hashing function. SO y'know. Y'know.
int HashTabl::hash(string itemKey)
{
    int value = 0;
    for(int i = 0; i < itemKey.length(); i++)
    {
        value += itemKey[i];
    }
    return (itemKey.length() * value) % length;
}


//Adding items to our hash map
void HashTabl::insertItem(Item *newItem)
{
    int index = hash(newItem->key);
    //Here we're adding the new item into our array of linked lists
    array[index].insertItem(newItem);
}

bool HashTabl::removeItem(string itemKey)
{
    //So we get the hash
    int index = hash(itemKey);
    //Then remove it from the array based on it's index
    return array[index].removeItem(itemKey);
}

Item *HashTabl::getItemByKey(string itemKey)
{
    //So we decode the thing
    int index = hash(itemKey);
    //then find the thing
    return array[index].getItem(itemKey);
}

void HashTabl::printTable() {

}

void HashTabl::printHistogram() {

}

int HashTabl::getLength() {
    return 0;
}

int HashTabl::getNumberOfItems() {
    return 0;
}
