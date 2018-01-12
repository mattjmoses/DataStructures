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
//    newList.InsertNodeAtPosition(5,"I've inserted a new node");
//    newList.InsertNodeAtPosition(6,"One more at the end");
//    newList.InsertNodeAtPosition(0,"And a last one at the start");


//    newList.ReadNodes();

    newList.DeleteNode(4);
    newList.DeleteNode(0);

    newList.ReadNodes();


    return 0;
}