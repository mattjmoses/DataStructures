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


    //sorter.BubbleSort(shuffledArray,1000);
    //sorter.SelectionSort(shuffledArray,1000);
    //sorter.InsertionSort(shuffledArray,10);
    //sorter.ShellSort(shuffledArray,1000);
    int a[] = {-100,10,43,23,-78,45,123,56,98,41,90,24};
    int num;

    num = sizeof(a)/sizeof(int);

    int b[num];

    sorter.MergeSort(a,b,0,num-1);

    for(int i=0; i<num; i++)
        cout<<a[i]<<" ";
    cout<<endl;



    return 0;
}