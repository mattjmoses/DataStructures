#include <iostream>
#include <fstream>
using namespace std;

#include "LinkedList.h"
#include "TextToListParser.h"
#include "UIHandler.h"
#include "TitleDisplay.h"

int main(int argc,char* argv[]) {

    //Declaring our initial objects
    LinkedList linkedList;
    TextToListParser textToList;
    UIHandler mainUI;
    ProgramGraphics graphics;

    //Converting the command line arguments to strings
    string editArgument = string(argv[1]);
    string inFileName = string(argv[2]);
    string outFileName = string(argv[3]);

    //Checking to see if the input file is valid
    ifstream checkFile(inFileName);
    if(checkFile)
    {
        //If edit argument is inputted then enter edit mode.
        if(editArgument == "EDIT" )
        {

            //Displays a cool title
            graphics.displayTitle();

            //Converts the input text to a linked list
            linkedList = textToList.parseNewList(inFileName);

            //Passes the linked list to the UI for editing
            mainUI.editText(linkedList,outFileName);
        }
        else
        {
            //If no arguments are given it just reads the test out
            graphics.displayTitle();
            linkedList.ReadNodes();
        }
    }
    else
    {
        cout << "Invalid input file. Please check your file name and try again" << endl;
    }




    return 0;
}