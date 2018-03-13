#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int arrSize =1000;
    int a[arrSize];
    int fillArray = -1;

    for(int i = 0; i < arrSize; i++)
    {
        fillArray ++;
        a[i] = fillArray;
    }

    for (int i = 0; i < arrSize; i++)
    {
        cout << a[i]<<",";
    }
    cout << endl;

    random_shuffle(&a[0],&a[arrSize]);

    for (int i = 0; i < arrSize; i++)
    {
        cout << a[i]<< ",";
    }
    cout << endl;
    return 0;
}