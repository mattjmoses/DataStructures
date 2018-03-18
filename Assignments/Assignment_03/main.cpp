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
        int startValue = 1000;
        int arraySiz = stoi(argv[1]);
        cout<< arraySiz << endl;

        //And now we do all the stuff.
        int  *shuffledArray = arrayManager.createRandomArray(arraySiz);

        //Bubble sort business============================================
        int bubbleCopy[arraySiz];
        for(int i = 0; i< arraySiz; i++)
        {
            bubbleCopy[i] = shuffledArray[i];
        }
        if(arraySiz <= startValue)
        {
            //Do a sort without timing for verification
            sorter.BubbleSort(bubbleCopy,arraySiz);
            ofstream bubbleFile("bubbleSort.txt");
            bubbleFile.open("bubbleSort.txt", std::ofstream::out | std::ofstream::app);
            bubbleFile<< "Initial sort test"<< endl;
            bubbleFile<<"=========================="<<endl;
            for(int i = 0; i< arraySiz; i++)
            {
                if(i % 100 == 0)
                {
                    bubbleFile << endl;
                }
                bubbleFile << bubbleCopy[i];
            }
            bubbleFile << "========================"<< endl;

        }
        else
        {
            //Bubble Sorting with timer
            clock_t begin = clock();
            sorter.BubbleSort(bubbleCopy,arraySiz);
            clock_t end = clock();
            double timeSec = (end - begin) / static_cast<double>( CLOCKS_PER_SEC );
            //--Output result of the bubbleCopy to file here
        }
        //Selection Sort business ==========================================
        int selectCopy[arraySiz];
        for(int i = 0; i< arraySiz; i++)
        {
            selectCopy[i] = shuffledArray[i];
        }
        if(arraySiz <= startValue)
        {
            //Do a sort without timing for verification
            sorter.SelectionSort(selectCopy,arraySiz);
            ofstream selectionFile("selectionSort.txt");;
            selectionFile.open("selectionSort.txt", std::ofstream::out | std::ofstream::app);
            selectionFile<< "Initial sort test"<< endl;
            selectionFile<<"=========================="<<endl;
            for(int i = 0; i< arraySiz; i++)
            {
                if(i % 100 == 0)
                {
                 selectionFile << endl;
                }
                selectionFile << selectCopy[i];
            }
            selectionFile << "========================"<< endl;
        }
        else
        {
            //Selection sort with timing
            clock_t begin = clock();
            sorter.SelectionSort(selectCopy,arraySiz);
            clock_t end = clock();
            double timeSec = (end - begin) / static_cast<double>( CLOCKS_PER_SEC );
            //--Output result of the bubbleCopy to file here
        }
        //Insertion Sort business ==========================================
        int insertCopy[arraySiz];
        for(int i = 0; i< arraySiz; i++)
        {
            insertCopy[i] = shuffledArray[i];
        }
        if(arraySiz <= startValue)
        {
            //Do a sort without timing for verification
            sorter.InsertionSort(insertCopy,arraySiz);
            ofstream insertionFile("insertionSort.txt");
            insertionFile.open("insertionSort.txt", std::ofstream::out | std::ofstream::app);
            insertionFile<< "Initial sort test"<< endl;
            insertionFile<<"=========================="<<endl;
            for(int i = 0; i< arraySiz; i++)
            {
                if(i % 100 == 0)
                {
                    insertionFile << endl;
                }
                insertionFile<< insertCopy[i];
            }
            insertionFile << "========================"<< endl;
        }
        else
        {
            //Selection sort with timing
            clock_t begin = clock();
            sorter.InsertionSort(insertCopy,arraySiz);
            clock_t end = clock();
            double timeSec = (end - begin) / static_cast<double>( CLOCKS_PER_SEC );
            //--Output result of the bubbleCopy to file here
        }
        //Shell Sort business ==========================================
        int shellCopy[arraySiz];
        for(int i = 0; i< arraySiz; i++)
        {
            shellCopy[i] = shuffledArray[i];
        }
        if(arraySiz <= startValue)
        {
            //Do a sort without timing for verification
            sorter.SelectionSort(shellCopy,arraySiz);
            ofstream shellFile("shellSort.txt");
        }
        else
        {
            //Selection sort with timing
            clock_t begin = clock();
            sorter.ShellSort(shellCopy,arraySiz);
            clock_t end = clock();
            double timeSec = (end - begin) / static_cast<double>( CLOCKS_PER_SEC );
            //--Output result of the bubbleCopy to file here
        }
        //Merge Sort business ==========================================
        int mergeCopy[arraySiz];
        for(int i = 0; i< arraySiz; i++)
        {
            mergeCopy[i] = shuffledArray[i];
        }
        if(arraySiz <= startValue)
        {
            //Do a sort without timing for verification

            int pivot;

            pivot = sizeof(mergeCopy)/sizeof(int);
            int tempArray[pivot];
            sorter.MergeSort(mergeCopy,tempArray,0,pivot-1);
            ofstream mergeFile("mergesort.txt");

        }
        else
        {
            //Merge sort with timing
            int pivot;
            int tempArray[pivot];
            clock_t begin = clock();
            pivot = sizeof(mergeCopy)/sizeof(int);
            sorter.MergeSort(mergeCopy,tempArray,0,pivot-1);
            clock_t end = clock();
            double timeSec = (end - begin) / static_cast<double>( CLOCKS_PER_SEC );
            //--Output result of the bubbleCopy to file here
        }
        //Quick Sort business ==========================================
        int quickCopy[arraySiz];
        for(int i = 0; i< arraySiz; i++)
        {
            quickCopy[i] = shuffledArray[i];
        }
        if(arraySiz <= startValue)
        {
            //Do a sort without timing for verification
            sorter.SelectionSort(quickCopy,arraySiz);
            ofstream shellFile("shellSort.txt");
        }
        else
        {
            //Quick sort with timing
            clock_t begin = clock();
            sorter.QuickSort(quickCopy,0,arraySiz);
            clock_t end = clock();
            double timeSec = (end - begin) / static_cast<double>( CLOCKS_PER_SEC );
            //--Output result of the bubbleCopy to file here
        }

    }
    catch (exception e)
    {

    }


//    //Our variious files.
//
//
//
//
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




//    cout<<endl;
//    for (int w : arrayCopy) {
//        cout<< w <<",";
//    }
//
//    cout<<endl;



    return 0;
}