//
// Created by mattjmoses on 23/01/18.
//

#include <fstream>
#include "TextToListParser.h"

TextToListParser::TextToListParser() = default;

TextToListParser::~TextToListParser() = default;



LinkedList TextToListParser::parseNewList(string fileName)
{
    //Taking in the file name. Everybody's happy
    ifstream readFile(fileName);

    LinkedList linkedList;
    //storing text in a variable
    string textLine;

    //Reads the text file and adds every line to the linked list
    if(readFile.is_open())
    {
        while(getline(readFile,textLine))
        {
            linkedList.CreateNode(textLine);
        }
    }
    //returns the linked list
    return linkedList;
}




