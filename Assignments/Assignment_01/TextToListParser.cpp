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
    //Testing out our text inFile
    if(readFile.is_open())
    {
        while(getline(readFile,textLine))
        {
            linkedList.CreateNode(textLine);
        }
    }
    linkedList.ReadNodes();
    return LinkedList();
}




