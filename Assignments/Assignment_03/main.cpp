#include <iostream>
#include "Sorting.h"
#include "ArrayManager.h"

using namespace std;
int main()
{
    ArrayManager arrayManager;
    Sorting sorter;

    //Creating the shuffled array
    int  *shuffledArray = arrayManager.createRandomArray(50);

    sorter.BubbleSort(shuffledArray,50);


    return 0;
}