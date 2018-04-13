//
// Created by matt on 13/04/18.
//

#include "HashTable.h"

HashTable::HashTable() = default;

HashTable::~HashTable() = default;

int HashTable::hashHappener(string value)
{
    int hash(0);
    //Now were're creating a hash for the inputted string using computer magic.
    for (int i=0; i< value.length(); i++)
    {
        hash = (hash << 6) ^ (hash >> 26) ^ value[i];
    }
    return hash;
}



