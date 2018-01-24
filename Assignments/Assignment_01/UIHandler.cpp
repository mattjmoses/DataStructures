//
// Created by mattjmoses on 23/01/18.
//


#include <iostream>
#include <regex>
#include "UIHandler.h"

UIHandler::UIHandler() = default;

UIHandler::~UIHandler() = default;


void UIHandler::editText(LinkedList &list)
{
    //Not using regex apparently!
    string key;

    displayCommands();
    cout << "Input Command: ";
    cin >> key;

    if(key == "i" || key == "I")
    {
        cout << "I key pressed!"<< endl;
    }
    else
    {
        cout << "Wrong key!"<< endl;
    }


    list.ReadNodes();
}

void UIHandler::validateCommands(string command)
{

}

void UIHandler::displayCommands()
{
    cout << "=========================================================================" << endl;
    cout << "Please choose a command"<< endl;
    cout <<"=========================================================================="<< endl;
    cout << "(I) -Inserts a new line at a specified number"<< endl;
    cout << "(D) -Deletes either a single line or a range of lines" << endl;
    cout << "(V) -View entire contents of the file" << endl;
    cout << "(G) -Goes to the specefied line number inputted" << endl;
    cout << "(L) -Lists current lines in the buffer" << endl;
    cout << "(S) -Substitutes a new line. Enter line number and input new text" << endl;
    cout << "(E) -Exits the program and writes any changes to the specified text file" << endl;
    cout << "(Q) -Quits the program without saving" << endl;
    cout << endl;
}
