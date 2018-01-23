//
// Created by mattjmoses on 23/01/18.
//

#ifndef ASSIGNMENT_01_UIHANDLER_H
#define ASSIGNMENT_01_UIHANDLER_H


#include "LinkedList.h"

class UIHandler {
    public:

    UIHandler();
    ~UIHandler();

    //Handles the editing functionality of the linked list
    void editText(LinkedList&);

    //Takes in text commands and ensures they're valid
    void validateCommands(string);

    //Just displays commands for user input
    void displayCommands();
};


#endif //ASSIGNMENT_01_UIHANDLER_H
