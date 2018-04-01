//
// Created by mattmoses on 31/03/18.
//

#ifndef ASSIGNMENT_04B_AVLTREE_H
#define ASSIGNMENT_04B_AVLTREE_H

typedef  struct Node
{
    int data;
    Node* left;
    Node* right;
    int height;
};
class AVLTree
{
public:
    void deleteTree(Node*);
    Node* findNode(int, Node*);
    Node* findMin(Node*);
    Node* findMax(Node*);
    int height(Node*);
    int max(int,int);
    Node* leftRot(Node*);
    Node* rightRot(Node*);
    Node* dblLeftRot(Node*);
    Node* dblRightRot(Node*);
    Node* insert(int, Node*);
    void displayTree(Node*);
    int get(Node*);
};


#endif //ASSIGNMENT_04B_AVLTREE_H
