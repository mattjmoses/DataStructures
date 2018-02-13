//
// Created by matt on 12/02/18.
//
#include "Node.h"
#include "Stack.h"
#include "iostream"
using namespace std;
//Referencing code from http://www.cppforschool.com
//The ol constuctor




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
        cout<< "Coordinates X: " << temp->coords[0]<<"Y: "<< temp->coords[1] << " removed from stack";
        delete temp;
    }
    else
        cout<<"Stack empty";

}
//Display top element of the stack
void Stack::display()
{
    Node *temp = top;
    while(temp!= nullptr)
    {
        cout<< "X coordinate: " << temp->coords[0]<<" Y coordinate: " <<temp->coords[1] << endl;
        temp=temp->nodePtr;
    }
}


