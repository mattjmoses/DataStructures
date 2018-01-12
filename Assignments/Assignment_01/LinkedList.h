//
// Created by Matt on 2018-01-11.
//

#ifndef ASSIGNMENT_01_LINKEDLIST_H
#define ASSIGNMENT_01_LINKEDLIST_H
#include<string>
#include "Node.h"


class LinkedList {
    public:
    LinkedList();//Constructor
    virtual ~LinkedList(); //The ol destructor

    //Class functions. The num refers to the node number, or row number when viewing the text
    void CreateNode(string text);
    void ReadNodes();
    void UpdateNode(int position, string newText);
    void DeleteNode(int position);
    void InsertNodeAtPosition(int position, string text);


    private:
    int CountNodes();//Used to count the number of nodes in the list. For internal use only.
    Node *head; //Node for the start of the list
    Node *tail; //Node for the end of the list

};


#endif //ASSIGNMENT_01_LINKEDLIST_H
