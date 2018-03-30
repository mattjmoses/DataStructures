//
// Created by mattmoses on 30/03/18.
//

#ifndef ASSIGNMENT_04B_AVLTREE_H
#define ASSIGNMENT_04B_AVLTREE_H

//Our node structure
struct Node
{
    //The node data
    int data;
    //Left and right branch pointers
    Node* left;
    Node* right;
    //The height of our tree
    int height;
};

class AvlTree
{
    public:

    void insertNode(Node *, int);
    void deleteNode(Node*, int);
    int deleteMinNode(Node*, int);
    void findNode(Node* ,int);
    Node* findMin(Node*);
    Node* findMax(Node*);




};


#endif //ASSIGNMENT_04B_AVLTREE_H
