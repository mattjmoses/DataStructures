//
// Created by Matt on 2018-01-10.
//

#ifndef ASSIGNMENT_01_NODE_H
#define ASSIGNMENT_01_NODE_H

#include<string>


using namespace std;
//Here's our node class which handles all the data and pointers on the nodes.
class Node {
    public
    :string nodeData; //This contains the text data in the node.
    Node *nodePtr; //This node points to the next node in the chain.
};


#endif //ASSIGNMENT_01_NODE_H
