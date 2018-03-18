//
// Created by matt on 17/03/18.
//

#include "ExternalMergeSort.h"

char * ExternalMergeSort::ExternalMergeSort(char *string, int i) = default;

ExternalMergeSort::~ExternalMergeSort() = default;

//To begin we're taking in a simple character array. This will change to a file which we'll mank into an array.
char* ExternalMergeSort::ExtMergeSort(char *File, int n)
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

        //We copy everything before the pivot to the first temp array.
        for(int i = 0; i < pivot; i++)
        {
            first[i] = File[i];
        }
        //Then barf the rest of this nonsense into the second temp array
        for(int i = pivot; i < n; i++)
        {
            second[i-pivot] = File[i];
        }

        //Then the recursion happens
        first = ExtMergeSort(first, pivot);
        second = ExtMergeSort(second, n-pivot);

        //And then we put this mess back together.
        int l = 0;
        int r = 0;
        int k = 0;

        //Nowe we're comparing the two arrays
        while(l < pivot && r < n-pivot)
        {
            //So we check if the line from the first half is less than the second half
            //if so we push it to the result
            if(first[l] <= second[r])
            {
                //This needs to be a result file
                File[k] = first[l];
                //Then iterate on up!
                l++;
            }
        }

    }

    return File;
}
