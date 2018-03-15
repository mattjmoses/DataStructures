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

    //sorter.BubbleSort(shuffledArray,1000);
    //sorter.SelectionSort(shuffledArray,1000);
    //sorter.InsertionSort(shuffledArray,10);
    //sorter.ShellSort(shuffledArray,1000);
    cout<<endl;


    return 0;
}