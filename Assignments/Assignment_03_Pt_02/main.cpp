#include <iostream>
#include "ExternalMergeSort.h"
using namespace std;
int main()
{
    ExternalMergeSort mergeSort;
    //Sample string
    char str[] = "sdlkjhfljkh";
    //Sort string
    char* res = mergeSort.ExtMergeSort(str, 11);
    //Print result
    cout << res << endl;
    return 0;
}
