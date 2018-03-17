//
// Created by matt on 16/03/18.
//
#include <iostream>
#include <fstream>
#include <string>

#ifndef ASSIGNMENT_03_PT_02_EXTERNALMERGESORT_H
#define ASSIGNMENT_03_PT_02_EXTERNALMERGESORT_H
using namespace std;
//Code referenced from http://cis.stvincent.edu
class ExternalMergeSort
{
    //Setting our constants and other programming detritus

    //Setting the maximum length of our given strings
    const int maxStrLength = 32;
    //Setting a reliable buffer size
    const int bufferSize = 2048;

    //Setting our char array to our max string length
    typedef char StringType[maxStrLength];
    //Setting a buffer array that can hold 2048 strings -makes sense
    typedef StringType Buftype[bufferSize];
    //Setting the path type *cough* And we ran into our first Windows exclusive bug! Hoot hoot
    typedef char PathType[FILENAME_MAX];

    public:
        ExternalMergeSort(); //The ol' default constructor
        ~ExternalMergeSort(); //Our dear friend the default destructor

        //Setting up some error handling methods
        void Error(const string & Msg );
        void Error(const string & MsgA, const string & MsgB);
        //Sorting method
        int PerformSortedRuns(fstream & dataFile, PathType fileName);
        //Calculating string values
        bool CalculateLessThan(StringType first, StringType second);
        //What's quicksort doing here?! It's here now. So deal with it!
        void QuickSort(Buftype buf, int lower, int upper);
        //Swap helper method for the quicksort
        void Swap(StringType first, StringType second);
        //Partition which ALSO is in the service of the quicksort *cough*
        int Partition(Buftype buf, int lower, int upper);
        //AND WE MERGE!
        void Merge(StringType inFileOne, StringType inFileToo, StringType ootFile);
        //And our fill buffer. Filling in the buffers.
        int FillBuffer(fstream & inFile, Buftype buff, bool & hasData, StringType nextWord);
        //Our copy method. Sending data from one file to another and so on.
        void Copy(StringType word, Buftype buff, int & index, fstream outFile);
        //Handling the merging of the merges
        void HandleMerges(int numFiles, PathType filenName);
};


#endif //ASSIGNMENT_03_PT_02_EXTERNALMERGESORT_H
