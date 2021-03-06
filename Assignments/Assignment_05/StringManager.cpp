//
// Created by matt on 01/04/18.
//

#include <cstring>
#include <iostream>
#include "StringManager.h"

StringManager::StringManager() = default;

StringManager::~StringManager() = default;

//This is going to strip out any special characters from our word so we can see if it's spelled correctly
string StringManager::stringStripper(string word)
{
    locale loc;
    string lowercase;
    char toRemove[] = "()-.\"#&1234567890$%*!@<,>?:;\'";
    for (int i = 0; i < strlen(toRemove); ++i ) {
        word.erase( remove(word.begin(), word.end(), toRemove[i]), word.end() );
    }
    for (std::string::size_type i=0; i<word.length(); ++i)
    {
        lowercase += tolower(word[i],loc);
    }

    return lowercase;
}
