#include <iostream>

#include "LinkedList.h"

int main() {


    LinkedList newList;

    newList.CreateNode("Here's a node");
    newList.CreateNode("Also another node");
    newList.CreateNode("More nodes!");
    newList.CreateNode("ALL THE NODES!!");
    newList.CreateNode("This is the last node");

    newList.ReadNodes();
    cout<<"++++++++++++++++"<<endl;
    newList.InsertNodeAtPosition(1,"I've inserted a new node");

    newList.ReadNodes();


    return 0;
}