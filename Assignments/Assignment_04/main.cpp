#include <iostream>
#include <fstream>
#include "Search.h"

using namespace std;
int main() {
    Search goSearch;
    int arraySize = 1000;
    int array[arraySize];
    //Populating the array with numbers 1-1000 More or less
    for(int i = 0; i < arraySize; i++)
    {
        array[i] = i;

    }

    int result = goSearch.sequentialSearch(array,50);
    int result02 = goSearch.binarySearch(array, 0,arraySize,999);
    cout << result;
    cout << endl;
    cout << result02;


    return 0;
}