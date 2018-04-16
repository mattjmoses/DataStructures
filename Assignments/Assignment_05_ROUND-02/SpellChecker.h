//
// Created by matt on 16/04/18.
//

#ifndef ASSIGNMENT_05_ROUND_02_SPELLCHECKER_H
#define ASSIGNMENT_05_ROUND_02_SPELLCHECKER_H
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
//Here's where we feed our dictionary to the hashTable
class SpellChecker
{
public:
    SpellChecker();//The ol' default constructor
    ~SpellChecker();//The ol' default destructor

    void CheckSpelling(string, string);//Spellchecks a document against a dictionary
    void RecordWrongWords(string);//Records any mispelled words to an external file
};




#endif //ASSIGNMENT_05_ROUND_02_SPELLCHECKER_H
