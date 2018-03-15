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
    void SelectionSort(int*);
    void InsertionSort(int*);
    void ShellSort(int*);
    void MergeSort(int*);
    void QuickSort(int*);
    void ExternalMergeSort(int*);
};


#endif //ASSIGNMENT_03_SORTING_H
