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
int Search::binarySearch(int *array, int search)
{
    return 0;
}
