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
    LinkedList inList = list;

    //Listing out the text file initially
    list.ReadNodes();

    //storing the keys


    //Displays the input commands
    displayCommands();
    while(true)
    {
        string key;
        //Takes in the command
        cout << "Input Command: ";
        cin >> key;

        //Then the ol if else block to figure out which command were hit
        if(key == "i" || key == "I")
        {
            string newText;
            int position = 0;
            cin.ignore();
            cout<< "Input line position: ";
            cin >> position;
            cin.ignore();
            cout<< "Input text to insert: ";
            getline(cin, newText);
            cout << endl;
            inList.InsertNodeAtPosition(position, newText);
            inList.ReadNodes();
            displayCommands();

        }
        else if(key == "d" || key == "D")
        {
            int start;
            int end;
            cin.ignore();
            cout << "-Please choose range to delete-"<< endl;
            cout << "First number: ";
            cin >> start;
            cin.ignore();
            cout << "Second number: ";
            cin >> end;
            inList.DeleteRange(start,end);
            inList.ReadNodes();
            displayCommands();
        }
        else if(key == "v" || key == "V")
        {
            inList.ReadNodes();
            displayCommands();
        }
        else if(key == "g" || key == "G")
        {
            int position;
            cin.ignore();
            cout << "Please select a line to read:";
            cin >> position;
            inList.ReadSpecificNode(position);
            cout << endl;
            displayCommands();
        }
        else if(key == "l" || key == "L")
        {
            cout << "L key pressed"<< endl;
        }
        else if(key == "s" || key == "S")
        {
            int position;
            string newText;
            cin.ignore();
            cout << "Please select a line to edit: ";
            cin >> position;
            cin.ignore();
            cout << "Please enter new text: ";
            getline(cin,newText);
            cout << endl;
            inList.UpdateNode(position,newText);
            cout << endl;
            displayCommands();



        }
        else if(key == "e" || key == "E")
        {
            cout << "E key pressed"<< endl;
        }
        else if(key == "q" || key == "Q")
        {
            cout << "Have a nice day :)";
            break;
        }
        else
        {
            cout << "Invalid input!" << endl;
        }
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
