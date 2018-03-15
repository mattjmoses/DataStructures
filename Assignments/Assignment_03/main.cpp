#include <iostream>
#include "Sorting.h"
#include "ArrayManager.h"

using namespace std;
int main()
{
    ArrayManager arrayManager;
    Sorting sorter;

    //Creating the shuffled array
    int  *shuffledArray = arrayManager.createRandomArray(1000);

    sorter.BubbleSort(shuffledArray,1000);
    cout<<endl;
    //Minor issue, the sort, sorts the whole goddamn array globally
    cout<<endl;
    for(int i = 0; i< 1000; i++)
    {
        cout<< shuffledArray[i]<<",";
    }

    return 0;
}