#include <iostream>
#include <string>
#include "ExternalMergeSort.h"
using namespace std;
int main()
{
    ExternalMergeSort mergeSort;
    //Sample string array.
    string strArray[10] = {"lala","toop","zop","garpo","alphaghetti","tootson","boobs","vagona","skiing","zzzzzzzzzzZ"};

    char str[] = "sdlkjhfljkh";
    //Sort string
    //The merge sort.
    char* res = mergeSort.ExtMergeSort(str, 11);
    string* newArr = mergeSort.MergeSort(strArray,10);
    //Print result
    cout << res << endl;

    for(int i = 0; i < 10; i++)
    {
        cout<< newArr[i] << endl;
    }
    return 0;
}
