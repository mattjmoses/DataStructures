#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <algorithm>
#include "Node.h"
#include "AvlTree.h"
#include "StringManager.h"
#include "SpellChecker.h"

using namespace std;
int main()
{
    SpellChecker hitIt;

    hitIt.CheckSpelling("mispelled.txt","dictionary.txt");



    return 0;

}

