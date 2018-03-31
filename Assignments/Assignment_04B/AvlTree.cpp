//
// Created by mattmoses on 30/03/18.
//

#include "AvlTree.h"

AvlTree::AvlTree() = default;

AvlTree::~AvlTree() = default;

int AvlTree::max(int a, int b)
{
    //Is a larger than b? if so return a, otherwise return b
    return (a > b)? a : b;
}

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

AvlTree::Node *AvlTree::createNode(int) {
    return nullptr;
}

AvlTree::Node *AvlTree::rorateRight(AvlTree::Node *) {
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
