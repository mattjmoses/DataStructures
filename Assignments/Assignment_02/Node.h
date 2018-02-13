//
// Created by matt on 12/02/18.
//

#ifndef ASSIGNMENT_02_NODE_H
#define ASSIGNMENT_02_NODE_H


class Node {
    public:
    int coords[1]; //Contains the grid coords for the maze array
    Node *nodePtr; //This node points to the next node in the chain.
};


#endif //ASSIGNMENT_02_NODE_H
