//
// Created by matt on 16/04/18.
//

#include "LinkedList_The_Revenge.h"

LinkedList_The_Revenge::LinkedList_The_Revenge()
{
    //Setting our defaults
    head = new Item;
    head->next = nullptr;
    length = 0;

}
//Burning down our linked list
LinkedList_The_Revenge::~LinkedList_The_Revenge()
{
    Item * p = head;
    Item * q = head;
    while(q)
    {
        p = q;
        q = p->next;
        if(q)
        {
            delete p;
        }
    }
}

//Making a new item on the chain
void LinkedList_The_Revenge::insertItem(Item *newItem)
{
    //And setting the head to point to the next item if it has no neighbor
    if(!head->next)
    {
        head->next = newItem;
        length++;
        return;
    }

    //if not then insert the next item in the chain and increase the length
    Item * p = head;
    Item * q = head;

    while(q)
    {
        p = q;
        q = p->next;
    }
    p->next = newItem;
    newItem->next = nullptr;
    length++;

}

bool LinkedList_The_Revenge::removeItem(string itemKey)
{
    //If there's nothing else in the chain then don't do anything
    if(!head->next)
    {
        return false;
    }
    Item * p = head;
    Item * q = head;
    //Looping through the list until we find what we're looking for
    while(q)
    {
        if(q->key == itemKey)
        {
            p->next = q->next;
            delete q;
            length --;
            return true;
        }
        p = q;
        q = p->next;
    }
    return false;
}


//Searching through the dang list
Item *LinkedList_The_Revenge::getItem(string itemKey)
{
    Item * p = head;
    Item * q = head;

    while(q)
    {
        p = q;
        if((p != head) && (p->key == itemKey))
        {
            return p;
        }
        q = p->next;

    }
    return nullptr;
}

void LinkedList_The_Revenge::printList()
{
    if(length == 0)
    {
        cout << "THE LIST IS EMPTY!"<< endl;
        return;
    }
    Item * p = head;
    Item * q = head;

    while(q)
    {
        p = q;
        if(p != head)
        {
            cout << p->key;
            if(p->next)
            {
                cout << ", ";
            }
            else
                {
                    cout << " ";
                }
        }
        q = p->next;
    }
}

int LinkedList_The_Revenge::getLength()
{
    return length;
}
