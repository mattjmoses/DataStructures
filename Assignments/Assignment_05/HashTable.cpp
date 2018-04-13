//
// Created by matt on 13/04/18.
//

#include <fstream>
#include <iostream>
#include "HashTable.h"


//Code referenced from stackoverflow.com

HashTable::HashTable() = default;

HashTable::~HashTable() = default;

//Our hashing function. Complete with collisions
int HashTable::hashHappener(string value)
{

    int hash(0);
    //Now were're creating a hash for the inputted string using computer magic.
    for (int i=0; i< value.length(); i++)
    {
        //Movin' the bits around for better numbers.
        hash = (hash << 6) ^ (hash >> 26) ^ value[i];
    }
    return hash;
}

void HashTable::checkForCollisions(string filename)
{
    int count = 0;
    int collisions = 0;
    fstream input(filename);
    string data;
    int array[30000];

    //File stream
    while(!input.eof()){
        input>>data;
        array[count] = hashHappener(data);
        for(int i = 0; i<count; i++){
            if(array[i]==array[count]){
                collisions++;
                cout << data << " caused the collision!"<< endl;
                // Once we've found one collision, we don't want to count all of them.
                break;
            }
        }
        // We don't want to check our hashcode against the value we just added
        // so we should only increment count here.
        count++;
    }
    cout<<"Total Input is: " <<count-1<<endl;
    cout<<"Collision # is: "<<collisions<<endl;
}



