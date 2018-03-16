#include <iostream>
#include "Sorting.h"
#include "ArrayManager.h"

using namespace std;
void merge(int*,int*,int,int,int);


int main()
{
    ArrayManager arrayManager;
    Sorting sorter;

    //Creating the shuffled array
    int  *shuffledArray = arrayManager.createRandomArray(100000);

    int arrayCopy[100000];

    for(int i = 0; i< 100000; i++)
    {
        arrayCopy[i] = shuffledArray[i];
    }

    //sorter.BubbleSort(arrayCopy,100000);
    //sorter.SelectionSort(arrayCopy,100000);
    //sorter.InsertionSort(shuffledArray,10);
    //sorter.ShellSort(shuffledArray,1000);
    sorter.QuickSort(arrayCopy,0,100000);

    int pivot;

    pivot = sizeof(arrayCopy)/sizeof(int);

    int tempArray[pivot];

//    sorter.MergeSort(arrayCopy,tempArray,0,pivot-1);

    cout<<endl;
    for (int w : arrayCopy) {
        cout<< w <<",";
    }

    cout<<endl;



    return 0;
}