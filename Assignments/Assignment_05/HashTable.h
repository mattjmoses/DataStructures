//
// Created by matt on 13/04/18.
//

#ifndef ASSIGNMENT_04B_HASHTABLE_H
#define ASSIGNMENT_04B_HASHTABLE_H

#include <string>

using namespace std;

class HashTable
{
    public:
    //Our string value
    string value;
    HashTable();//The ol' default constructor
    ~HashTable();//The ol' default destructor

    //And our humble hashing function.
    int hashHappener(string);
    //Function to check for collisions in our data
    void checkForCollisions(string);

};


#endif //ASSIGNMENT_04B_HASHTABLE_H
