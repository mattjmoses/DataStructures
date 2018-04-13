#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <algorithm>
#include "Node.h"
#include "AvlTree.h"
#include "StringManager.h"
#include "SpellChecker.h"
#include "HashTable.h"

using namespace std;
int main()
{
    SpellChecker hitIt;

    hitIt.CheckSpelling("mispelled.txt","dictionary.txt");

    HashTable hasher;
    hasher.checkForCollisions("dictionary.txt");
//
//    string bob = "jan";
//    string carg = "Lala";
//
//    int address = hasher.hashHappener(bob);
//    int address02 = hasher.hashHappener(carg);
//    int address03 = hasher.hashHappener(bob);
//
//    cout << "value: "<< bob << " " << address << endl;
//    cout << "value: "<< carg << " " << address02<< endl;
//    cout << "value: "<< bob << " " << address03 << endl;


    return 0;

}

