//
// Created by matt on 29/03/18.
//

#include "Search.h"

Search::Search() = default;
Search::~Search() = default;

//Sequential search. Takes in an array and outputs the resulting position of the search query
int Search::sequentialSearch(int *array, int search)
{

    //In the case of this program the array is always 1000, so it can be hard coded.
    for(int q = 0; q < 1000; q++)
    {
        //So basically we just loop through and when we hit the number we return
        //The position of that number in the array
        if(array[q] == search)
        {
            return q;
        }
    }
    //If the number in the array isn't found then return -1
    return -1;
}

//Binary search. Takes in an array and outputs the resulting position of the search query
//And beginning and end of the array (or left right)
int Search::binarySearch(int *array,int left, int right, int search)
{
    //this guy is fucking us over
    int middle;
    //If the left is less than the right(which is generally is going to be, at the start anyhow)
    while(left <= right)
    {
        //We get the midpoint of the array
        middle = left + (right-1)/2;

        //If the search number is at the midpoint
        if(array[middle] == search)
        {
            //We're done
            return middle;
        }
        //If our midpoint is less than the search number
        if(array[middle] < search)
        {
            //We dump the left half of the array and search from the midpoint plus one
            left = middle + 1;
        }
        else
        {
            //Otherwise if the search is less than the midpoint we dump the righthand side.
            right = middle - 1;
        }
    }
    return 0;
}
