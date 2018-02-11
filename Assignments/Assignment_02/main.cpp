#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //New empty dynamic array.
    int **newArray;
    int rows = 9;
    int col = 9;
    newArray = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        newArray[i] = new int[col];
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            newArray[i][j] = i;
        }
    }


    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << newArray[i][j];
        }
        cout << endl;
    }

    return 0;
}