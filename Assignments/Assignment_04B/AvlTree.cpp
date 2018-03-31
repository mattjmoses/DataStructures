//
// Created by mattmoses on 30/03/18.
//

#include "AvlTree.h"
#include <stdlib.h>

AvlTree::AvlTree() = default;

AvlTree::~AvlTree() = default;

//Figuring out which integer is bigger
int AvlTree::max(int a, int b)
{
    //Is a larger than b? if so return a, otherwise return b
    //Turnary operators :0
    return (a > b)? a : b;
}
//Getting the height of the tree. Takes in a node
int AvlTree::getHeight(Node *node)
{
    //Here we check if the node is actually there
    if(node == nullptr)
    {
        return 0;
    }
    else
        {
          //Return the height of the node
          return node->height;
        }

}
//Creating a brand new node -used in the insert function
AvlTree::Node *AvlTree::createNode(int data)
{
    //Being fancy allocating a memory thing with the node.
    Node* newNode = (Node*)malloc(sizeof(Node));
    //giving the node the data we want
    newNode->data = data;
    //Initializing our pointers kind of. They point to nothing
    newNode->left = nullptr;
    newNode->right = nullptr;
    //Creating a default height, This will change once the node is actually
    //added to the tree
    newNode->height = 1;

    return nullptr;
}

AvlTree::Node *AvlTree::rorateRight(Node *nodeY)
{
    //Node x and y are both root nodes
    //Pointing to our pointers
    Node *nodeX = nodeY->left;
    //Is a subtree of X
    Node* subTree = nodeX->right;

    //So we rotate
    nodeX->right = nodeY;
    nodeY->left = subTree;

    //Updating our node heights
    nodeY->height = max(getHeight(nodeY->left),getHeight(nodeY->right)) + 1;
    nodeX->height = max(getHeight(nodeX->left),getHeight(nodeX->right)) +1;
    return nullptr;
}

AvlTree::Node *AvlTree::rotateLeft(AvlTree::Node *) {
    return nullptr;
}

int AvlTree::getBalance(AvlTree::Node *) {
    return 0;
}

AvlTree::Node *AvlTree::insertNode(AvlTree::Node *) {
    return nullptr;
}

void AvlTree::preOrderTree(AvlTree::Node *) {

}
