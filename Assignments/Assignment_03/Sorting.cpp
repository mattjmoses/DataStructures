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

    //So our, two numbers to compare
    int outer, inner;
    //We start looping through comparing each neighboring number
    for (outer = size - 1; outer > 0; outer--)
    {  // counting down
        for (inner = 0; inner < outer; inner++)
        {   //If the current number is bigger than it's neighboer then switch them
            if (array[inner] > array[inner + 1])
            {  // if out of order...swap
                int temp = array[inner];
                array[inner] = array[inner + 1];
                array[inner + 1] = temp;
            }
        }
    }

}
//The ol' Selection Sort -Takes in an integer array
void Sorting::SelectionSort(int *array, int size)
{
    int outer, inner, min;
    //So we start looping through our list
    for (outer = 0; outer < size - 1; outer++) { // outer counts down
        min = outer;
        //Then we scan through the array to find the smallest element
        for (inner = outer + 1; inner < size; inner++) {
            if (array[inner] < array[min]) {
                min = inner;
            }
        }
        //Once we find the smallest element we place it at the minimum position
        int temp = array[outer];
        array[outer] = array[min];
        array[min] = temp;

    }

}
//The ol Insertion Sort
void Sorting::InsertionSort(int *array, int size)
{

    int i, j ,tmp;
    for (i = 1; i < size; i++)
    {
        //We loop through until we find an element to be switched
        j = i;
        while (j > 0 && array[j - 1] > array[j])
        {
            //We shift the array over and insert the element in the correct position
            tmp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = tmp;
            j--;
        } //end of while loop
    } //end of for loop


}

//The ol' Shell Sort
void Sorting::ShellSort(int *array, int size)
{
    int i, j, temp, increment;
    for(increment = size/2; increment > 0; increment /= 2)
    {
        for(i = increment; i<size; i++)
        {
            temp = array[i];
            for(j = i; j >= increment; j-=increment)
            {
                if(temp < array[j-increment])
                {
                    array[j] = array[j-increment];
                }
                else
                {
                    break;
                }
            }
            array[j] = temp;
        }
    }

}

void Sorting::Merge(int *array, int *tempArray, int low, int pivot, int high)
{
    int h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;

    while((h<=pivot)&&(j<=high))
    {
        if(array[h]<=array[j])
        {
            tempArray[i]=array[h];
            h++;
        }
        else
        {
            tempArray[i]=array[j];
            j++;
        }
        i++;
    }
    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            tempArray[i]=array[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            tempArray[i]=array[k];
            i++;
        }
    }
    for(k=low; k<=high; k++)
    {
        array[k]=tempArray[k];
    }


}

void Sorting::MergeSort(int *a, int*b, int low, int high)
{
    int pivot;
    if(low<high)
    {
        pivot=(low+high)/2;
        MergeSort(a,b,low,pivot);
        MergeSort(a,b,pivot+1,high);
        Merge(a,b,low,pivot,high);
    }

}

//Utility function for the quicksort
int Sorting::Partition(int *arr, int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            Swap(&arr[i], &arr[j]);
        }
    }
    Swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
//Utility function for the quick sort
void Sorting::Swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
//The ol' Quick Sort
void Sorting::QuickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = Partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}





