#include <iostream>
#include <string>
#include "ExternalMergeSort.h"
using namespace std;
int main()
{
    ExternalMergeSort mergeSort;
    //Sample string array.
    string strArray[10] = {"lala","toop","zop","garpo","alphaghetti","tootson","boobs","vagona","skiing","zzzzzzzzzzZ"};


    //She sorts!
    string* newArr = mergeSort.MergeSort(strArray,10);

    cout << strArray << endl;

    for(int i = 0; i < 10; i++)
    {
        cout<< newArr[i] << endl;
    }
    return 0;
}
