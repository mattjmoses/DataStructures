#include <iostream>
#include <string>
#include <fstream>
#include "ExternalMergeSort.h"
using namespace std;
int main()
{
    ExternalMergeSort mergeSort;
    //Sample string array.
    string strArray[10] = {"lala","toop","zop","garpo","alphaghetti","tootson","borstche","voltzwagon","skiing","zzzzzzzzzzZ"};

    //Doing some setup so we know how many entries are in the file
    //For NOW we're only inputting a single file
    ifstream readFile("phonebook.txt");
    //Creating out output file
    ofstream writeFile("sorted.txt");
    int numEntries = -1;
    //This only serves for looping purpose. Doesn't serve a function in the program at this point.
    string throwAway;
    if(readFile.is_open())
    {
        while(getline(readFile,throwAway))
        {
            numEntries ++;
        }
    }

    cout<<"Number of entries in file: " << numEntries << endl;
    //She sorts!
    string* newArr = mergeSort.FileSort("phonebook.txt","sorted.txt",numEntries);

    cout << strArray << endl;

    for(int i = 0; i < 10; i++)
    {
        cout<< newArr[i] << endl;
    }
    return 0;
}
