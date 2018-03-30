//
// Created by matt on 30/03/18.
//

#ifndef ASSIGNMENT_04B_NODE_H
#define ASSIGNMENT_04B_NODE_H

#include <string>
using namespace std;

class Node
{
    public:
    Node(); //The ol default constructor
    ~Node(); //The ol default destructor

    //All the elements of our friend, the node
    string word;
    Node* left;
    Node* right;
    int count;
};


#endif //ASSIGNMENT_04B_NODE_H
