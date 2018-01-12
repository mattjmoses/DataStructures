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





















