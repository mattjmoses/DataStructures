//
// Created by matt on 17/03/18.
//

#ifndef ASSIGNMENT_03_PT_02_EXTERNALMERGESORT_H
#define ASSIGNMENT_03_PT_02_EXTERNALMERGESORT_H

#include <string>
using namespace std;

class ExternalMergeSort
{
    public:
        ExternalMergeSort(); //The ol' default constructor
        ~ExternalMergeSort();//The ol' default destructor

        string* MergeSort(string*, int); //The framework for external merge sort
};


#endif //ASSIGNMENT_03_PT_02_EXTERNALMERGESORT_H
