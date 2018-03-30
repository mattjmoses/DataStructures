#include <iostream>
#include <fstream>
#include <ctime>
#include "Search.h"

using namespace std;
int main() {
    Search goSearch;
    int arraySize = 1000;
    int array[arraySize];
    //Populating the array with numbers 1-1000 More or less
    for(int i = 0; i < arraySize; i++)
    {
        array[i] = i;

    }
    int result;
    int result02;
    fstream seq("seqSearch.txt", ios::in | ios::out | ios::app);

    if(!seq.is_open())
    {
        cout << "error happen";
    }
    else
    {
        for(int w =0; w < arraySize; w++)
        {
            //timer start
            double begin = clock();
            result = goSearch.sequentialSearch(array,w);
            //timer stop
            double end = clock();

            //Calculating time in seconds
            double timeSec = (end-begin)/double(CLOCKS_PER_SEC)*1000;
            //writer to file
            seq<< "Time to search for " << result <<" : " << timeSec << endl;
        }
        seq.close();
    }





    fstream bin("binSearch.txt", ios::in | ios::out | ios::app);
    if(!bin.is_open())
    {
        cout << "error happen";
    }
    else
    {
        for(int q = 0; q < arraySize; q++)
        {
            //timer start
            double begin = clock();
            result02 = goSearch.binarySearch(array, 0,arraySize,q);
            //timer stop
            double end = clock();

            //Calculating time in seconds
            double timeSec = (end-begin)/double(CLOCKS_PER_SEC)*1000;
            //write to file
            bin<< "Time to search for " << result02 <<" : " << timeSec << endl;
        }
        bin.close();

    }





    return 0;
}