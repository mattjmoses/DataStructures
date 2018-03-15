#include <iostream>
#include <algorithm>
#include <random>

using namespace std;
int main()
{
    //Here we create our array
    //going to need to take it from a command line argument, but for now she's okay.
    int arrSize =1000;
    int upperLimit = 32767;
    int a[arrSize];
    int fillArray = -1;

    //This counts up from zero and populates our array
    for(int i = 0; i < arrSize; i++)
    {
        //Checking reset the count if it's above the given threshold
        if(fillArray > upperLimit)
        {
            //IF so, then reset the counter
            fillArray = -1;
        }
        fillArray ++;
        a[i] = fillArray;
    }
    //This just prints out the unshuffled array
    for (int i = 0; i < arrSize; i++)
    {
        cout << a[i]<<",";
    }
    cout << endl;
    //Performs the shuffle on the array
    shuffle(&a[0],&a[arrSize],mt19937(random_device()()));

    //Printing out the shuffled array
    for (int i = 0; i < arrSize; i++)
    {
        cout << a[i]<< ",";
    }
    cout << endl;
    return 0;
}