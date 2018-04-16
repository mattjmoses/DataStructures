#include <iostream>
#include "HashTabl.h"
#include "SpellChecker.h"
int main() {

    SpellChecker speller;

    //And we check the spelling
    speller.CheckSpelling("mispelled.txt","dictionary.txt");

    return 0;
}