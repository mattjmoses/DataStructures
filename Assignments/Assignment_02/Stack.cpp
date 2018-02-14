//
// Created by matt on 12/02/18.
//
#include "Node.h"
#include "Stack.h"
#include "iostream"
using namespace std;
//Referencing code from http://www.cppforschool.com




//The ol stack destructor
Stack::~Stack()
{
    //Looping through and removing all the stack elements from memory
    while(top!= nullptr)
    {
        Node *temp = top;
        top = top->nodePtr;
        delete temp;
    }

}
//Push new elements onto the stack
void Stack::push(int x, int y)
{
    //Creating a new node and setting the x and y values and adding it to the top.
    Node *tempNode;
    tempNode = new Node;
    tempNode->coords[0] = x;
    tempNode->coords[1] = y;
    tempNode->nodePtr = top;
    top = tempNode;
}
//Removing elements from the stack
void Stack::pop()
{
    //If the top element isn't null then remove it and say what was removed
    if(top != nullptr)
    {
        Node *temp=top;
        top = top->nodePtr;
        //cout<< "Coordinates X: " << temp->coords[0]<<"Y: "<< temp->coords[1] << " removed from stack";
        delete temp;
    }
    else
        cout<<"Stack empty";

}
//Displays the x value of the stack node
int Stack::displayX()
{

    //Checks the top node of the stack. Basically useless unless we can see
    Node *temp = top;

    if(temp!= nullptr)
    {

        return temp->coords[0];
    }
    else
    {
        return 0;
    }

}
//Displays the Y value of the stack
int Stack::displayY()
{

    //Checks the top node of the stack. Basically useless unless we can see
    Node *temp = top;

    if(temp!= nullptr)
    {

        return temp->coords[1];
    }
    else
    {
        return 0;
    }

}



