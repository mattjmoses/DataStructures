//
// Created by mattmoses on 31/03/18.
//

#ifndef ASSIGNMENT_04B_NODE_H
#define ASSIGNMENT_04B_NODE_H

//Our node class so we can actually create nodes
class Node {
    public:
    //Our data
    int data;
    //Pointers to left and right branches
    Node* left;
    Node* right;
    //The tree height
    int height;
};


#endif //ASSIGNMENT_04B_NODE_H
