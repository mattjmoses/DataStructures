//
// Created by matt on 12/02/18.
//

#ifndef ASSIGNMENT_02_STACK_H
#define ASSIGNMENT_02_STACK_H


class Stack {
    //Struct for
    struct Node
    {
        int coords[1];
        Node *nodePtr;
    };


        Node *top;
    public :
        Stack(){ top= nullptr;}
        void push(int,int);
        void pop();
        int displayX();
        int displayY();
        ~Stack();



};
#endif //ASSIGNMENT_02_STACK_H
