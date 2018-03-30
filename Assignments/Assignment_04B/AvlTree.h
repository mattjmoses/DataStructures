//
// Created by mattmoses on 30/03/18.
//

#ifndef ASSIGNMENT_04B_AVLTREE_H
#define ASSIGNMENT_04B_AVLTREE_H


class AvlTree
{
    public:

    //The node what holds all the data
    struct Node
    {
        //Our node data
        int data;
        //Pointers to the other nodes
        Node *left;
        Node *right;
        //Height of our node tree
        int height;
    };

    int max(int, int); //Used to get the higher value of two numbers. Will have to change this in future
    int getHeight(Node*);//Gets the height of the tree
    Node* createNode(int);//This makes a new node
    Node* rotateRight(Node*);//Rotates our branch to the... RIGHT
    Node* rotateLeft(Node*); //Rotating to the left
    int getBalance(Node*); //Gets the balance of a specific node. Returns it's height essentially

};


#endif //ASSIGNMENT_04B_AVLTREE_H
