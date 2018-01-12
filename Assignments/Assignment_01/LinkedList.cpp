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
void LinkedList::DeleteNode(int position)
{
    //Node counter method.
    int index = CountNodes();

    //First we check if the position is valid
    if(position < 0 || position > index + 1)
    {
        cout<< "Row number out of range. Delete failed :C" << endl;
        return;
    }

    //If valid the delete moves forward.
    Node *delNode;

    if(position == 0)
    {
        delNode = head;
        head = head->nodePtr;
        delete  delNode;
    }




}

//Creates new node at a specified position.
void LinkedList::InsertNodeAtPosition(int position, string text)
{
    int index = CountNodes();
    //Start by checking if the position is valid.
    if(position > index + 1 || position < 0)
    {
        cout<<"Out of range! Please input a valid row number."<< endl;
        return;
    }
    else if(position == 0)
    {
        Node *startNode = new Node;
        startNode->nodeData = text;
        startNode->nodePtr = head;
        head = startNode;
        return;
    }

    Node *prevNode = new Node; //We need to keep track of the previous node
    Node *curNode = new Node; //and the current node to stitch the pointers back together
    Node *newNode = new Node; //This is the node to be inserted
    curNode = head; //Sets the current node to the head of the list

    for(int i = 0; i<position; i++) //Getting out index starting at zero
    {
        prevNode = curNode;
        curNode = curNode->nodePtr;
    }

    newNode->nodeData = text;
    prevNode->nodePtr = newNode;
    newNode->nodePtr = curNode;
}

int LinkedList::CountNodes() {
    //This keeps track of the nodes for use in the class functions
    Node *checkNode;
    checkNode = head;
    int index = -1;

    while(checkNode != nullptr)
    {
        index++;
        checkNode = checkNode->nodePtr;
    }

    return index;
}
























