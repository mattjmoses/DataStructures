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
//The ol Insertion Sort
void Sorting::InsertionSort(int *array, int size)
{
    int i, j ,tmp;
    for (i = 1; i < size; i++)
    {
        j = i;
        while (j > 0 && array[j - 1] > array[j])
        {
            tmp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = tmp;
            j--;
        } //end of while loop
    } //end of for loop

    cout<<"Insertion sort!"<< endl;
    for (int b = 0; b < size; b++)
    {
        cout << array[b] << ",";
    }
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
    cout<<"Shell sort!"<< endl;
    for (int b = 0; b < size; b++)
    {
        cout << array[b] << ",";
    }
}

void Sorting::Merge(int *a, int *b, int low, int pivot, int high)
{
    int h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;

    while((h<=pivot)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low; k<=high; k++)
    {
        a[k]=b[k];
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

    cout<<endl;
    for(int w=0; w<high; w++)
        cout<<a[w]<<",";
    cout<<endl;
}





