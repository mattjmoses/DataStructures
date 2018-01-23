//
// Created by mattjmoses on 23/01/18.
//

#include "ProgramGraphics.h"
#include <iostream>
#include <fstream>
using namespace std;


ProgramGraphics::ProgramGraphics() = default;

ProgramGraphics::~ProgramGraphics() = default;

void ProgramGraphics::displayTitle()
{
    ifstream titleFile("title.txt");
    string line;
    if(titleFile.is_open())
    {
        while(getline(titleFile,line))
        {
            cout << line << endl;
        }
    }

}

