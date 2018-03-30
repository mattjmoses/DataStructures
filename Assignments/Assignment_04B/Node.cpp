//
// Created by matt on 30/03/18.
//

#include "Node.h"

Node::Node()
{
    //To start our nodes are set as null. So y'know
    left = nullptr;
    right = nullptr;
    //And our count is zero
    count = 0;
}

Node::~Node() = default;
