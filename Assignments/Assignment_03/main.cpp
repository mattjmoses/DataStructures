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
    int  *shuffledArray = arrayManager.createRandomArray(1000);

    int arrayCopy[1000];

    for(int i = 0; i< 1000; i++)
    {
        arrayCopy[i] = shuffledArray[i];
    }

    //sorter.BubbleSort(shuffledArray,1000);
    //sorter.SelectionSort(shuffledArray,1000);
    //sorter.InsertionSort(shuffledArray,10);
    //sorter.ShellSort(shuffledArray,1000);

    //arrayCopy= {-100,10,43,23,-78,45,123,56,98,41,90,24,8,7,7,7,7,3};
    int num;

    num = sizeof(arrayCopy)/sizeof(int);

    int tempArray[num];

    sorter.MergeSort(arrayCopy,tempArray,0,num-1);





    return 0;
}