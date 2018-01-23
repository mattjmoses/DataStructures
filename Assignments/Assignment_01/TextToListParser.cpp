//
// Created by mattjmoses on 23/01/18.
//

#include <fstream>
#include "TextToListParser.h"

TextToListParser::TextToListParser() {}

TextToListParser::~TextToListParser() {}



LinkedList TextToListParser::parseNewList(ifstream *inFile)
{

    LinkedList linkedList;
    //storing text in a variable
    string textLine;
    //Testing out our text inFile
    if(inFile.is_open())
    {
        while(getline(inFile,textLine))
        {
            linkedList.CreateNode(textLine);
        }
    }
    linkedList.ReadNodes();
    return LinkedList();
}




