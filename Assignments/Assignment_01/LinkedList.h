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
    void CreateNode();
    void ReadNodes();
    void UpdateNode(int num, string newText);
    void DeleteNode(int num);

    private:
    Node *head; //Node for the start of the list
    Node *tail; //Node for the end of the list

};


#endif //ASSIGNMENT_01_LINKEDLIST_H
