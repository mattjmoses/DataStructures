//
// Created by Matt on 2018-01-11.
//
#include <iostream>
#include "LinkedList.h"


using namespace std;

LinkedList::LinkedList()
{
    //Declaring the head and tail of the list as null to start.
    head = nullptr;
    tail = nullptr;
}

LinkedList::~LinkedList()
{

}

//Creates a new node, attaches a text string.
void LinkedList::CreateNode(string text)
{
    //Our new node.
    Node *newNode = new Node;
    newNode->nodeData = text; //Assigns the text value to the node
    newNode->nodePtr = nullptr; //Initially makes the next pointer null, since initially it has nothing to point to

    if(head == nullptr) //if the head is null then make the current node the head and make the tail null
    {
        head = newNode;
        tail = newNode;

    }
    else
    {
        tail->nodePtr = newNode; //If the head is not null, then add the new pointer to the taiil
        tail = newNode; //then give the tail the data from the current node
    }
}

//Lists out all the nodes in the list
void LinkedList::ReadNodes()
{
    Node *readNode;
    readNode = head; //Here we set the read node to the front of the list
    int index = -1;
    while(readNode != nullptr)
    {
        index++;
        cout << index << ">> ";
        cout<< readNode->nodeData << endl; //While the read node isn't null we loop through
        readNode = readNode->nodePtr; //at the end we update the node's pointer to the next one
    }
}

//Updates an indiviual node on the list. Takes the node number and the updated text
void LinkedList::UpdateNode(int num, string newText)
{

}

//Deletes a node on the list
void LinkedList::DeleteNode(int num)
{

}

//Creates new node at a specified position.
void LinkedList::InsertNodeAtPosition(int position, string text)
{
    Node *prevNode = new Node; //We need to keep track of the previous node
    Node *curNode = new Node; //and the current node to stitch the pointers back together
    Node *newNode = new Node; //This is the node to be inserted
    curNode = head; //Sets the current node to the head of the list
    //First we need to count the number of nodes in the list. OTHERWISE it buggers up.
//    if(curNode->nodePtr == nullptr)
//    {
//        cout<<"Out of range!"<< endl;
//        return;
//    }
    for(int i = 0; i<position; i++) //Getting out index starting at zero
    {


        prevNode = curNode;
        curNode = curNode->nodePtr;

    }

    newNode->nodeData = text;
    prevNode->nodePtr = newNode;
    newNode->nodePtr = curNode;
}























