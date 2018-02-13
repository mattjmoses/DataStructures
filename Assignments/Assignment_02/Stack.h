//
// Created by matt on 12/02/18.
//

#ifndef ASSIGNMENT_02_STACK_H
#define ASSIGNMENT_02_STACK_H


class Stack {

    public:
        Stack();//The ol constructor
        ~Stack();//The ol default constructor
        void push(int, int); //Stack push method takes in x and y coordinates
        void pop(); //Stack pop method
        void display(); //Stack display method

    private:
    //Top node on the stack
    Node *top;


};
#endif //ASSIGNMENT_02_STACK_H
