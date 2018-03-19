//
// Created by matt on 17/03/18.
//

#include "ExternalMergeSort.h"


ExternalMergeSort::ExternalMergeSort() = default;
ExternalMergeSort::~ExternalMergeSort() =default;


//Code referenced from 8bitavenue.com
//Now we get the string array sorter going There's gonna be some dosey do-ing with the file reading
//BUT whatevs.
string *ExternalMergeSort::MergeSort(string *File, int n)
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
        string* first = new string[pivot];
        string* second = new string[n - pivot];

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
        first = MergeSort(first, pivot);
        second = MergeSort(second, n-pivot);

        //And then we put this mess back together.
        //This is where the second file comes into play. So the file here would be a new file
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
            else
            {
                //Otherwise put the other one into the result(since it's lower)
                File[k] = second[r];
                r++;
            }
            k++;
        }

        //After that we need to check if there's anything left over
        if(l <  pivot)
        {
            while(l < pivot)
            {
                File[k] = first[l];
                l++;
                k++;
            }
        }

        if(r < n-pivot)
        {
            while(r < n-pivot)
            {
                File[k] = second[r];
                r++;
                k++;
            }
        }

    }



    return File;
}

string ExternalMergeSort::FileSort(string inFile, int) {

}

