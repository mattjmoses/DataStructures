#include <iostream>

#include "LinkedList.h"

int main() {


    LinkedList newList;

    newList.CreateNode("0");
    newList.CreateNode("1");
    newList.CreateNode("2");
    newList.CreateNode("3");
    newList.CreateNode("4");
    newList.CreateNode("5");
    newList.ReadNodes();
    cout<<"++++++++++++++++"<<endl;
//    newList.InsertNodeAtPosition(5,"I've inserted a new node");
//    newList.InsertNodeAtPosition(6,"One more at the end");
//    newList.InsertNodeAtPosition(0,"And a last one at the start");


//    newList.ReadNodes();
    //newList.DeleteNode(5);
    newList.DeleteNode(0);
    newList.DeleteNode(0);
    newList.DeleteNode(0);
    newList.DeleteNode(0);
    newList.DeleteNode(0);


    //newList.DeleteRange(2,4);

    newList.ReadNodes();


    return 0;
}