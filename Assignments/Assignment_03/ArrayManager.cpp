//
// Created by matt on 13/03/18.
//

#include "ArrayManager.h"
#include <iostream>
#include <algorithm>
using namespace std;
ArrayManager::ArrayManager() =default;

ArrayManager::~ArrayManager() =default;

//Building an array based on
int* ArrayManager::createRandomArray(int size) {
    int arrSize = size;
    int *myArray = new int[arrSize];
    int fillArray = -1;
    int upperLimit = 32767;

    //This counts up from zero and populates our array
    for(int i = 0; i < arrSize; i++)
    {
        //Making sure the count is below the given threshold
        if(fillArray == upperLimit)
        {
            //IF it's above the threshold then reset the counter
            fillArray = -1;
        }
        fillArray ++;
        myArray[i] = fillArray;
    }

    cout << endl;
    //Performs the shuffle on the array
    shuffle(&myArray[0],&myArray[arrSize],mt19937(random_device()()));




    return myArray;
}
