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
            //If the element is greater than the array[j] we move it over
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
    //We start off with a large gap, then reduce its size as we iterate
    for(increment = size/2; increment > 0; increment /= 2)
    {
        //Now we're doing a variation insertion sort on the gap
        //We keep adding elements until the gap is sorted...
        for(i = increment; i<size; i++)
        {
            //Saving elements into a temp variable for comparison purposes
            temp = array[i];
            for(j = i; j >= increment; j-=increment)
            {
                //If the element compared is larger than the temp variable
                if(temp < array[j-increment])
                {
                    //THEN switch it!
                    array[j] = array[j-increment];
                }
                else
                {
                    break;
                }
            }
            //Make the lower value the val of the temp variable, and repeat until done.
            array[j] = temp;
        }
    }

}
//The venerable merge sort. Takes in the array, a temp array, the range of the array and a pivot(half way point)
//This takes place over a couple different methods
void Sorting::Merge(int *array, int *tempArray, int low, int pivot, int high)
{
    int h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;
    //FIRST we copy everything before the pivot to the temp array
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
    //Next we continue subdividing our parts down
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
    //Then we start checking our ranges and moving things from the temp array back into our main array
    for(k=low; k<=high; k++)
    {
        array[k]=tempArray[k];
    }


}
//The recursion method for our merge sort
void Sorting::MergeSort(int *first, int*second, int low, int high)
{
    //Declaring our pivot
    int pivot;
    //Here's where we're handling our recursion
    if(low<high)
    {
        //Moving the pivot point
        pivot=(low+high)/2;
        //We re-do the merge sort with the arrays and the newly changed pivot
        //This continues until the merge sort is complete.
        MergeSort(first,second,low,pivot);
        MergeSort(first,second,pivot+1,high);
        Merge(first,second,low,pivot,high);
    }

}

//Utility function for the quicksort
int Sorting::Partition(int *array, int low, int high)
{
    //Setting our pivot..
    int pivot = array[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        //Checking if our element is smaller thn the pivot
        if (array[j] <= pivot)
        {
            //We increment the index of the lower element
            i++;
            //AND SWAP!
            Swap(&array[i], &array[j]);
        }
    }
    //Helper function to swap array elements
    Swap(&array[i + 1], &array[high]);
    //We return the next increment index through the array
    return (i + 1);
}
//Utility function for the quick sort
void Sorting::Swap(int *a, int *b)
{
    //This just swaps array elements.
    int t = *a;
    *a = *b;
    *b = t;
}
//The ol' Quick Sort
void Sorting::QuickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        //This is the partition index
        int pi = Partition(arr, low, high);

        //Here we sort the elements before
        QuickSort(arr, low, pi - 1);
        //and after the partition
        QuickSort(arr, pi + 1, high);
    }
}





