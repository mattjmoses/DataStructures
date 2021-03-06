//
// Created by mattmoses on 30/03/18.
//

#ifndef ASSIGNMENT_04B_AVLTREE_H
#define ASSIGNMENT_04B_AVLTREE_H
#include "Node.h"
#include "HashTable.h"

//Here now is the header for our AVL tree
//Code referenced from GeeksForGeeks.com
class AvlTree
{

public:

    AvlTree();//The ol' default constructor
    ~AvlTree(); //The ol' default destructor

    HashTable hash;
    int max(int, int); //getting the max integer. This is subject to change
    bool searchTree(string, Node*); //Searching the tree for specific data
    int getHeight(Node*); //Getting the height of the tree
    Node* createNode(string); //Creates a single node to be used in the insert
    Node* rotateRight(Node *); //Performs the rightward rotation
    Node* rotateLeft(Node*); //Does a rotate to the devil's direction
    int getBalance(Node*); //Gets the balance of the node
    Node*insertNode(Node*, string);//This actually puts the new node into the tree and performs the balancing
    void preOrderTree(Node*);//Peforms a pre-order traversal of the tree and displays what it finds



};


#endif //ASSIGNMENT_04B_AVLTREE_H