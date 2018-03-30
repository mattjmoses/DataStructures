//
// Created by matt on 30/03/18.
//

#ifndef ASSIGNMENT_04B_AVLTREE_H
#define ASSIGNMENT_04B_AVLTREE_H


class AVLTree
{
    public:
    AVLTree(); //The ol' default constructor
    ~AVLTree(); //The ol' default destructor

    //The methods for our AVL tree
    int getMaxVal(int, int); //Get max value between to entries -Will need to be changed to strings
    int getTreeHeight(struct Node*);//Get the height of our tree
    int getTreeBalance(struct Node*);
};


#endif //ASSIGNMENT_04B_AVLTREE_H
