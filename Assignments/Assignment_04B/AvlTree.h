//
// Created by mattmoses on 30/03/18.
//

#ifndef ASSIGNMENT_04B_AVLTREE_H
#define ASSIGNMENT_04B_AVLTREE_H

//Our node structure


class AvlTree
{

    public:

    struct Node
    {
        //Our data
        int data;
        //Pointers to left and right branches
        Node* left;
        Node* right;
        //The tree height
        int height;
    };

    void deleteTree(Node*);//Deletes our tree
    Node* search(Node,int);//Searches our tree
    Node* findMin(Node*);//Finds the min node in the tree
    Node* findMax(Node*);//Finds the max node in the tree
    Node* insertNode(Node*, int); //Inserts a new node into the tree
    Node* deleteNode(Node*, int); //Removes a node from the tree
    void displayTree(Node*); //Displays the whole tree
    int getNode(Node*);//And get's a single node *cough*


};


#endif //ASSIGNMENT_04B_AVLTREE_H
