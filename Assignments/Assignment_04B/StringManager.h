//
// Created by matt on 01/04/18.
//

#ifndef ASSIGNMENT_04B_STRINGMANAGER_H
#define ASSIGNMENT_04B_STRINGMANAGER_H

#include <string>
#include <algorithm>
using namespace std;

class StringManager
{
    public:
    StringManager(); //The ol' default constructor
    ~StringManager(); //The ol' default destructor

    void stringStripper(string); //Our string stripper class -removes special characters from strings
};


#endif //ASSIGNMENT_04B_STRINGMANAGER_H
