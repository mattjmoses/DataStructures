//
// Created by matt on 12/02/18.
//
#include "Node.h"
#include "Stack.h"


Stack::Stack()
{
    top = nullptr;

}

Stack::~Stack()
{

}

void Stack::push(int x, int y)
{
    Node *tempNode;
    tempNode = new Node;
    tempNode->coords[0] = x;
    tempNode->coords[1] = y;
    tempNode->nodePtr = top;
    top = tempNode;
}

void Stack::pop() {

}

void Stack::display() {

}
