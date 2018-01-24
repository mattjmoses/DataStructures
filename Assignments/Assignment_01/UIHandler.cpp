//
// Created by mattjmoses on 23/01/18.
//


#include <iostream>
#include <regex>
#include "UIHandler.h"

UIHandler::UIHandler() = default;

UIHandler::~UIHandler() = default;


void UIHandler::editText(LinkedList &list,string outFile)
{

    //Listing out the text file initially
    list.ReadNodes();

    //storing the keys
    string key;

    //Displays the input commands
    displayCommands();

    //Takes in the command
    cout << "Input Command: ";
    cin >> key;

    //Then the ol if else block to figure out which command were hit
    if(key == "i" || key == "I")
    {
        cout << "I key pressed!"<< endl;
    }
    else if(key == "v" || key == "V")
    {
        cout << "V key pressed"<< endl;
    }
    else if(key == "g" || key == "G")
    {
        cout << "G key pressed"<< endl;
    }
    else if(key == "l" || key == "L")
    {
        cout << "L key pressed"<< endl;
    }
    else if(key == "s" || key == "S")
    {
        cout << "S key pressed"<< endl;
    }
    else if(key == "e" || key == "E")
    {
        cout << "E key pressed"<< endl;
    }
    else if(key == "q" || key == "Q")
    {
        cout << "Q key pressed"<< endl;
    }
    else
    {
        cout << "Invalid input!" << endl;
    }



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
