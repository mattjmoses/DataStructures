//
// Created by matt on 17/03/18.
//

#include "ExternalMergeSort.h"

ExternalMergeSort::ExternalMergeSort() = default;

ExternalMergeSort::~ExternalMergeSort() = default;

//To begin we're taking in a simple character array. This will change to a file which we'll mank into an array.
char *ExternalMergeSort::ExtMergeSort(char *File, int n)
{
    //If the file only has one entry then there's no need to sort it
    if(n == 1)
    {
        return File;
    }
    else
    {
        //Otherwise we're going after the pivot!

        int pivot = n/2; //Just grabbing the halfway point.
        //Next we're setting out two temp arrays (will need to be replaced with files);
        char* first = new char[pivot];
        char* second = new char[n - pivot];
    }

    return nullptr;
}
