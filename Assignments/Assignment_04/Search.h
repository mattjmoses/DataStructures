//
// Created by matt on 29/03/18.
//

#ifndef ASSIGNMENT_04_SEARCH_H
#define ASSIGNMENT_04_SEARCH_H


class Search
{
    public:
    Search(); //The ol' default constructor
    ~Search();//The ol' default destructor

    //Method for the sequential seach. Takes in an integer array, and search number, and returns the index location
    int sequentialSearch(int*,int);
    //Method for the binary search. Takes in an integer array, and search number, and returns the index location
    int binarySearch(int*,int,int,int);
};


#endif //ASSIGNMENT_04_SEARCH_H
