//
// Created by matt on 16/04/18.
//

#include <fstream>
#include "HashTabl.h"

//code referenced from pumpkinprogrammerdotcom4.wordpress.com

HashTabl::HashTabl(int tableLength)
{
    if(tableLength <= 0)
    {
        tableLength = 53;
    }
    //Here we're setting a new array of linked lists
    array = new LinkedList_The_Revenge[tableLength];
    length = tableLength;

}


HashTabl::~HashTabl() = default;

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
void HashTabl::insertItem(Node *newItem)
{
    int index = hash(newItem->value);
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

bool HashTabl::getItemByKey(string itemKey)
{
    //So we decode the thing
    int index = hash(itemKey);
    //then find the thing
    return array[index].getItem(itemKey);
}

//Barfing out our linked lists from within the hash table
void HashTabl::printTable()
{
    cout << "Our venerable hash table: "<<endl;

    for(int i = 0; i < length; i++)
    {
        cout << "Bucket " << i+1 <<": ";
        array[i].printList();

    }
}

void HashTabl::pringHashTable()
{
    cout << "Hash table contents: ";
    cout << getNumberOfItems() << " items in table" << endl;

    for(int i = 0; i < length; i++)
    {
        cout << i + 1 << ":\t";
        for(int w = 0; w < array[i].getLength(); w++)
        {
            cout << "X";
        }
        cout << endl;
    }

}

int HashTabl::getLength()
{
    return length;
}

//Returning the number of items in the table.
int HashTabl::getNumberOfItems()
{
    int itemCount = 0;
    for (int i = 0; i < length; i++)
        itemCount += array[i].getLength();
    return itemCount;
}
