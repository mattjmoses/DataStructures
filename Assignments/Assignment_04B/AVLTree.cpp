//
// Created by mattmoses on 31/03/18.
//
#include <cstdlib>
#include <iostream>
#include "AVLTree.h"
using namespace std;
void AVLTree::deleteTree(Node *tree)
{
    if(tree != nullptr)
    {
        deleteTree(tree->left);
        deleteTree(tree->right);
        free(tree);
    }
}

Node *AVLTree::findNode(int data, Node *node)
{
    if(node == nullptr)
    {
        return nullptr;
    }
    if(data < node->data)
    {
        return  findNode(data,node->left);
    }
    else if(data > node->data)
    {
        return findNode(data,node->right);
    }
    else
        {
            return node;
        }
}

Node *AVLTree::findMin(Node *)
{
    return nullptr;
}

Node *AVLTree::findMax(Node *)
{
    return nullptr;
}

Node *AVLTree::insert(int data, Node *node)
{
   if(node == nullptr)
   {
       node =(Node*)malloc(sizeof(Node));
       if(node == nullptr)
       {
           cout << "Error happened :C" << endl;
           exit(1);
       }
       else
           {
               node->data = data;
               node->height = 0;
               node->left = nullptr;
               node->right = nullptr;
           }
   }
   else if( data < node->data )
   {
       node->left = insert( data, node->left );
       if( height( node->left ) - height( node->right ) == 2 )
           if( data < node->left->data )
               node = leftRot(node);
           else
               node = dblLeftRot(node);
   }
   else if( data > node->data )
   {
       node->right = insert( data, node->right );
       if( height( node->right ) - height( node->left ) == 2 )
           if( data > node->right->data )
               node = rightRot(node);
           else
               {
                node = dblRightRot(node);
               }
   }
    node->height = max(height(node->left),height(node->right)) + 1;
    return node;
}

void AVLTree::displayTree(Node *tree)
{
    if (tree == NULL)
        return;
    cout << tree->data << " ";

    if(tree->left != NULL)
        cout << tree->left->data<< " ";
    if(tree->right != NULL)
        cout << tree->right->data<< " ";


    displayTree(tree->left);
    displayTree(tree->right);
}

int AVLTree::get(Node *)
{
    return 0;
}

int AVLTree::height(Node *node)
{
    if(node == nullptr)
    {
        return  -1;
    }
    else
        {
            return  node->height;
        }
}

int AVLTree::max(int left, int right)
{
    return left > right ? left : right;
}

Node *AVLTree::leftRot(Node *k2)
{
    Node* k1 = nullptr;

    k1 = k2->left;
    k2->left = k1->right;
    k1->right = k2;

    k2->height = max( height( k2->left ), height( k2->right ) ) + 1;
    k1->height = max( height( k1->left ), k2->height ) + 1;
    return k1; /* new root */


}

Node *AVLTree::rightRot(Node * k1)
{
    Node* k2;

    k2 = k1->right;
    k1->right = k2->left;
    k2->left = k1;

    k1->height = max( height( k1->left ), height( k1->right ) ) + 1;
    k2->height = max( height( k2->right ), k1->height ) + 1;

    return k2;  /* New root */
}

Node *AVLTree::dblLeftRot(Node * k3)
{
    k3->left = rightRot(k3->left);

    return leftRot(k3);
}

Node *AVLTree::dblRightRot(Node * k1)
{
    k1->right = leftRot(k1->right);

    return  rightRot(k1);
}
