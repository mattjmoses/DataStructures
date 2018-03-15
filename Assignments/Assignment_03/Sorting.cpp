//
// Created by matt on 15/03/18.
//

#include "Sorting.h"
#include "iostream"
using namespace std;
Sorting::Sorting() = default;

Sorting::~Sorting() = default;

//The ol' Bubble sort -Takes in an integer array and array size
void Sorting::BubbleSort(int* array,int size)
{

    int outer, inner;
    for (outer = size - 1; outer > 0; outer--)
    {  // counting down
        for (inner = 0; inner < outer; inner++)
        {        // bubbling up
            if (array[inner] > array[inner + 1])
            {  // if out of order...swap
                int temp = array[inner];
                array[inner] = array[inner + 1];
                array[inner + 1] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout <<array[i]<<",";
    }
}
//The ol' Selection Sort -Takes in an integer array
void Sorting::SelectionSort(int *array, int size)
{
    int outer, inner, min;
    for (outer = 0; outer < size - 1; outer++) { // outer counts down
        min = outer;
        for (inner = outer + 1; inner < size; inner++) {
            if (array[inner] < array[min]) {
                min = inner;
            }
        }
        // a[min] is least among a[outer]..a[a.length - 1]
        int temp = array[outer];
        array[outer] = array[min];
        array[min] = temp;

    }
    cout<<"Selection sort!"<< endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ",";
    }
}



