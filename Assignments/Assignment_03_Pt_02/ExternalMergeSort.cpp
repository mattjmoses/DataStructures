//
// Created by matt on 16/03/18.
//

#include <cstring>
#include "ExternalMergeSort.h"

ExternalMergeSort::ExternalMergeSort() = default;

ExternalMergeSort::~ExternalMergeSort() = default;


void ExternalMergeSort::Error(const string &Msg)
{

}

void ExternalMergeSort::Error(const string &MsgA, const string &MsgB)
{

}
//Pulling in files and sorting them around
int ExternalMergeSort::PerformSortedRuns(fstream &dataFile, char *fileName)
{
    //All our file business
    fstream outFile;
    StringType word, extension;
    PathType outFileName;
    int numWords, k, numFiles = 0;
    Buftype buffer;
    bool moreData;
    //Fill a buffer and quicksort it.
    dataFile.getline(word,maxStrLength);

    //Checking to see if there's data in the file
    if(dataFile.fail())
    {
        moreData = false;
    }
    else
    {
        moreData = true;
    }
    //So while there's data to read.
    while(moreData)
    {
        //Fill the buffers!
        numWords = FillBuffer(dataFile, buffer, moreData, word);
        //And hit the quicksort
        QuickSort(buffer,0,numWords -1);

        //Next we build a temp file for the sorted data
        strcpy(outFileName, "sortTemp.");
        //Dear jesus christ
        sprintf(extension,"%d",numFiles);
        //And then send it along...
        strcat(outFileName, extension);

        //And then write it out
        outFile.open(outFileName,ios::out);
        if(outFile.fail())
        {
            Error("File not found", outFileName);
        }
        //And here we add all the text to the file.
        for(k = 0; k< numWords; k++)
        {
            outFile << buffer[k] << endl;
        }

    }
    return 0;
}

bool ExternalMergeSort::CalculateLessThan(char *first, char *second)
{
    return false;
}

void ExternalMergeSort::QuickSort(ExternalMergeSort::StringType *buf, int lower, int upper)
{

}

void ExternalMergeSort::Swap(char *first, char *second)
{

}

int ExternalMergeSort::Partition(ExternalMergeSort::StringType *buf, int lower, int upper)
{
    return 0;
}

void ExternalMergeSort::Merge(char *inFileOne, char *inFileToo, char *ootFile)
{

}

int ExternalMergeSort::FillBuffer(fstream &inFile, ExternalMergeSort::StringType *buff, bool &hasData, char *nextWord)
{
    return 0;
}

void ExternalMergeSort::Copy(char *word, ExternalMergeSort::StringType *buff, int &index, fstream outFile)
{

}

void ExternalMergeSort::HandleMerges(int numFiles, char *filenName)
{

}
