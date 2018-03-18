#include <iostream>
#include "Sorting.h"
#include "ArrayManager.h"
#include <ctime>
#include <fstream>

using namespace std;


//int main(int argc,char* argv[])
int main(int argc,char* argv[])
{
    ArrayManager arrayManager;
    Sorting sorter;

    //Pulling in our arraysize from the command line.
    try
    {
        int arraySiz = stoi(argv[1]);
        cout<< arraySiz << endl;

        //And now we do all the stuff.
        int  *shuffledArray = arrayManager.createRandomArray(arraySiz);

        //Copying the array for the bubble sort
        int bubbleCopy[arraySiz];

        for(int i = 0; i< arraySiz; i++)
        {
            bubbleCopy[i] = shuffledArray[i];
        }

        //Bubble Sorting with timer
        clock_t begin = clock();
        sorter.BubbleSort(bubbleCopy,arraySiz);
        clock_t end = clock();
        double timeSec = (end - begin) / static_cast<double>( CLOCKS_PER_SEC );
        //--Output result of the bubbleCopy to file here
    }
    catch (exception e)
    {

    }


//    //Our variious files.
//    ofstream bubbleFile("bubbleSort.txt");
//    ofstream selectionFile("selectionSort.txt");
//    ofstream insertionFile("insertionSort.txt");
//    ofstream shellFile("shellSort.txt");
//    ofstream quickFile("quickSort.txt");
//    ofstream mergeFile("mergesort.txt");
//    //Creating the shuffled array

//
//
//
//    //Our timer code. Use this for all array sorting

//    cout<< endl;
//    cout<< "Total calulation time: "<< timeSec << endl;
//
//    //sorter.SelectionSort(arrayCopy,100000);
//    //sorter.InsertionSort(shuffledArray,10);
//    //sorter.ShellSort(shuffledArray,1000);
//    //sorter.QuickSort(arrayCopy,0,100000);
//
//    int pivot;
//
//    pivot = sizeof(arrayCopy)/sizeof(int);
//
//    int tempArray[pivot];
//
////    sorter.MergeSort(arrayCopy,tempArray,0,pivot-1);
//
//    cout<<endl;
//    for (int w : arrayCopy) {
//        cout<< w <<",";
//    }
//
//    cout<<endl;



    return 0;
}