//
// Created by mattmoses on 30/03/18.
//

#include "AvlTree.h"
#include "Node.h"
#include <cstdlib>
#include <iostream>
using namespace std;

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
Node *AvlTree::createNode(int data)
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
//Handles the right rotation
Node *AvlTree::rotateRight(Node *nodeY)
{
    //Node x and y are both root nodes
    //Pointing to our pointers
    Node *nodeX = nodeY->left;
    //Is a subtree of X
    Node *subTree = nodeX->right;

    //So we rotate
    nodeX->right = nodeY;
    nodeY->left = subTree;

    //Updating our node heights
    nodeY->height = max(getHeight(nodeY->left),getHeight(nodeY->right)) +1;
    nodeX->height = max(getHeight(nodeX->left),getHeight(nodeX->right)) +1;

    //And we send along our freshly rotated branch
    return nodeX;
}
//Handles the left rotation
Node *AvlTree::rotateLeft(Node *nodeX)
{
    //Same as before with the right rotation more or less.
    Node *nodeY = nodeX->right;
    Node* subTree = nodeY->left;

    nodeY->left = nodeX;
    nodeX->right = subTree;
    return nullptr;
}

//Getting the balance of a given node
int AvlTree::getBalance(Node *node)
{
    //If it's empty then return zero
    if(node == nullptr)
    {
        return  0;
    }
    else
        {
            //Checking the height of the right and left branches
            return getHeight(node->left) - getHeight(node->right);
        }

}
//Here now is our function to add new nodes to the tree.
//Returns a new subtree root.
Node *AvlTree::insertNode(Node *node,int data)
{
    //If the thing's empty then make the inputted node the root
    if(node == nullptr)
    {
        return(createNode(data));
    }
    //Doing the insertion. Checking the values of the data compared
    //and determining which side to place it.
    if(data < node->data)
    {
        //If less place on the left
        node->left = insertNode(node->left, data);
    }
    else if(data > node->data)
    {
        //If more then place on the right
        node->right = insertNode(node->right, data);
    }
    else
        {
            //If it's equal then just return the node. Cause y'know
            return node;
        }
    //NEXT we update the height of the previous node so things are kept in order
    node->height = 1 + max(getHeight(node->left),getHeight(node->right));

    //NEXT we need to make sure our tree is balanced
    int currentBalance = getBalance(node);

    //NEXT! Comes the balancing (in the case our tree is out of balance)
    //Making a left left rotation
    if(currentBalance > 1 && data < node->left->data)
    {
        return rotateRight(node);
    }
    //Making a right right rotation
    if(currentBalance < -1 && data > node->right->data)
    {
        return rotateLeft(node);
    }
    //Making a left right rotation
    if(currentBalance > 1 && data > node->left->data)
    {
        node->left = rotateLeft(node->left);
        return rotateRight(node);
    }

    //AND making a right left rotation
    if(currentBalance < -1 && data < node->right->data)
    {
        node->right = rotateRight(node->right);
        return rotateLeft(node);
    }
    //If it gets through all those conditions without getting caught
    //Return the node as it is.
    return node;
}

//The ol preorder traversal
void AvlTree::preOrderTree(Node *rootNode)
{
    if(rootNode != nullptr)
    {
        cout << rootNode->data << " ";
        //Then we keep feeding the tree in until it all reads out.
        preOrderTree(rootNode->left);
        preOrderTree(rootNode->right);
    }
}
