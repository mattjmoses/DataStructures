//
// Created by mattmoses on 01/04/18.
//

#ifndef ASSIGNMENT_04B_SPELLCHECKER_H
#define ASSIGNMENT_04B_SPELLCHECKER_H

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class SpellChecker
{
    public:
    SpellChecker();//The ol' default constructor
    ~SpellChecker();//The ol' default destructor

    void CheckSpelling(string, string);
};


#endif //ASSIGNMENT_04B_SPELLCHECKER_H
