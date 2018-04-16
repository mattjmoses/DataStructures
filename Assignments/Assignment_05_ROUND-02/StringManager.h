//
// Created by matt on 16/04/18.
//

#ifndef ASSIGNMENT_05_ROUND_02_STRINGMANAGER_H
#define ASSIGNMENT_05_ROUND_02_STRINGMANAGER_H
#include <string>
#include <algorithm>
using namespace std;

class StringManager
{
public:
    StringManager(); //The ol' default constructor
    ~StringManager(); //The ol' default destructor

    string stringStripper(string); //Our string stripper class -removes special characters from strings

};


#endif //ASSIGNMENT_05_ROUND_02_STRINGMANAGER_H
