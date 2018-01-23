//
// Created by mattjmoses on 23/01/18.
//

#ifndef ASSIGNMENT_01_TEXTTOLISTPARSER_H
#define ASSIGNMENT_01_TEXTTOLISTPARSER_H


#include "LinkedList.h"

class TextToListParser {
    public:
    TextToListParser(); //DEFAULT CONSTRUCTOR!!!
    virtual ~TextToListParser(); //DESTRUCTOR!!!

    //Takes in a text file then parses it into a linked list
    //then returns the linked list object
    LinkedList parseNewList(string);
};


#endif //ASSIGNMENT_01_TEXTTOLISTPARSER_H
