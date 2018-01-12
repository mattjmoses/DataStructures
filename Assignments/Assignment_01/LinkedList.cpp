//
// Created by Matt on 2018-01-11.
//

#include "LinkedList.h"


using namespace std;

LinkedList::LinkedList()
{
    //Declaring the head and tail of the list as null to start.
    head = NULL;
    tail = NULL;

}

//Creates a new node, attaches a text string.
void LinkedList::CreateNode(string text)
{
    //Our new node.
    Node *curNode = new Node;
    curNode->nodeData = text; //Assigns the text value to the node
    curNode->nodePtr = NULL; //Initially makes the next pointer null, since initially it has nothing to point to

    if(head == NULL) //if the head is null then make the current node the head and make the tail null
    {
        head = curNode;
        tail = NULL;
    }
    else
    {
        tail->nodePtr = curNode; //If the head is not null, then add the new pointer to the tail with the afore mentioned null pointer
        tail = curNode; //then give the tail the data from the current node
    }

}

//Lists out all the nodes in the list
void LinkedList::ReadNodes()
{

}

//Updates an indiviual node on the list. Takes the node number and the updated text
void LinkedList::UpdateNode(int num, string newText)
{

}
//Deletes a node on the list
void LinkedList::DeleteNode(int num)
{

}





















