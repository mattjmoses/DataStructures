//
// Created by matt on 15/03/18.
//

#ifndef ASSIGNMENT_03_SORTING_H
#define ASSIGNMENT_03_SORTING_H


class Sorting
{
    public:
    Sorting();//The ol' default constructor
    ~Sorting();//The ol' default destructor

    //Our sorting methods
    void BubbleSort(int*, int);
    void SelectionSort(int*, int);
    void InsertionSort(int*, int);
    void ShellSort(int*, int);
    void Merge(int*,int*,int,int,int); //The merge function used in the merge sort
    void MergeSort(int *, int*, int, int);
    int Partition(int*,int,int); //Partition for the quicksort
    void Swap(int*, int*); //Swapping function to swap arrays around. <-get back to that
    void QuickSort(int*, int, int);
    void ExternalMergeSort(int*, int);
};


#endif //ASSIGNMENT_03_SORTING_H
