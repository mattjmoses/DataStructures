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
            bubbleFile<< "Initial sort test"<< endl;
            bubbleFile<<"==================================================================="<<endl;
            for(int i = 0; i< arraySiz; i++)
            {
                if(i % 100 == 0)
                {
                    bubbleFile << endl;
                }
                bubbleFile << bubbleCopy[i]<<",";
            }
            bubbleFile << endl;
            bubbleFile << "================================================================="<< endl;
            bubbleFile.close();

        }
        else
        {
            //Bubble Sorting with timer
            clock_t begin = clock();
            sorter.BubbleSort(bubbleCopy,arraySiz);
            fstream bub("bubbleSort.txt", ios::in | ios::out | ios::app);
            clock_t end = clock();
            double timeSec = (end - begin) / static_cast<double>( CLOCKS_PER_SEC );
            //--Output result of the bubbleCopy to file here
            if(!bub.is_open())
            {
                cout << "error opening file" << endl;
            }
            else
            {
                bub<< "Sorting: "<< arraySiz << " items" << endl;
                bub<< "Start time: " << begin << " miliseconds" << endl;
                bub<< "End time: " << end << " miliseconds" << endl;
                bub<< "Total time:" << timeSec <<" seconds" << endl;
                bub<<"==================================================================="<<endl;
                for(int i = 0; i< arraySiz; i++)
                {
                    if(i % 100 == 0)
                    {
                        bub << endl;
                    }
                    bub << bubbleCopy[i]<<",";
                }
                bub << endl;
                bub << "================================================================="<< endl;
                bub.close();
            }


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
            ofstream selectionFile("selectionSort.txt");
            selectionFile<< "Initial sort test"<< endl;
            selectionFile<<"==========================================="<<endl;
            for(int i = 0; i< arraySiz; i++)
            {
                if(i % 100 == 0)
                {
                 selectionFile << endl;
                }
                selectionFile << selectCopy[i] <<",";
            }
            selectionFile << endl;
            selectionFile << "========================================"<< endl;
            selectionFile.close();
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
            insertionFile<< "Initial sort test"<< endl;
            insertionFile<<"=============================================="<<endl;
            for(int i = 0; i< arraySiz; i++)
            {
                if(i % 100 == 0)
                {
                    insertionFile << endl;
                }
                insertionFile<< insertCopy[i]<<",";
            }
            insertionFile << endl;
            insertionFile << "==========================================="<< endl;
            insertionFile.close();
        }
        else
        {
            //Insertion sort with timing
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
            sorter.ShellSort(shellCopy,arraySiz);
            ofstream shellFile("shellSort.txt");
            shellFile<< "Initial sort test"<< endl;
            shellFile<<"==================================================="<<endl;
            for(int i = 0; i< arraySiz; i++)
            {
                if(i % 100 == 0)
                {
                    shellFile << endl;
                }
                shellFile<< shellCopy[i]<<",";
            }
            shellFile << endl;
            shellFile << "================================================="<< endl;
            shellFile.close();
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
            mergeFile<< "Initial sort test"<< endl;
            mergeFile<<"===================================================="<<endl;
            for(int i = 0; i< arraySiz; i++)
            {
                if(i % 100 == 0)
                {
                    mergeFile << endl;
                }
                mergeFile<< mergeCopy[i]<<",";
            }
            mergeFile << endl;
            mergeFile<< "=================================================="<< endl;
            mergeFile.close();

        }
        else
        {
            //Merge sort with timing
            int pivot;
            int tempArray[arraySiz];
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
            sorter.QuickSort(quickCopy,0,arraySiz);
            ofstream quickFile("quickSort.txt");
            quickFile<< "Initial sort test"<< endl;
            quickFile<<"=========================="<<endl;
            for(int i = 0; i< arraySiz; i++)
            {
                if(i % 100 == 0)
                {
                    quickFile << endl;
                }
                quickFile<< quickCopy[i]<<",";
            }
            quickFile << endl;
            quickFile << "========================"<< endl;
            quickFile.close();
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





    return 0;
}