//#include <iostream>
//
//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}
#include <iostream>

using namespace std;

//Merge sort c++ code explanation
//Receives input string and size
char* MergeSort(char* str, int n)
{
    //If the string is only one
    //character then it is already
    //sorted
    if (n == 1)
    {
        return str;
    }
    else
    {
        //Calculate the middle
        int m = n/2;

        //Allocate space for the two halves
        char* a = new char[m];
        char* b = new char[n-m];

        //Copy the first half of the string to a
        //and the second half of the string to b
        for (int i = 0; i < m; i++) a[i] = str[i];
        for (int i = m; i < n; i++) b[i-m] = str[i];

        //Merge sort c++ recursive:
        //Recursively call the function on the two
        //halves
        a = MergeSort(a, m);
        b = MergeSort(b, n-m);

        //The rest of the code is to merge the sorted
        //halves
        int l = 0;
        int r = 0;
        int k = 0;

        while (l < m && r < n-m)
        {
            //If the character from the first half
            //is less than the character of the
            //second half then push it to the result
            if (a[l] <= b[r])
            {
                str[k] = a[l];
                l++;
            }
                //Otherwise push the character from the
                //second half
            else
            {
                str[k] = b[r];
                r++;
            }

            k++;
        }

        //If the loop above is finished and still
        //l is less than m then this means there
        //are characters in the first half that
        //need to be appended to the result
        if (l < m)
        {
            while (l < m)
            {
                str[k] = a[l];
                l++;
                k++;
            }
        }

        //Similarly we need to append those characters
        //in the second half that were not added
        if (r < n-m)
        {
            while( r < n-m)
            {
                str[k] = b[r];
                r++;
                k++;
            }
        }

        //Return the sorted string
        return str;
    }
}

//Main function
int main()
{
    //Sample string
    char str[] = "sdlkjhfljkh";
    //Sort string
    char* res = MergeSort(str, 4);
    //Print result
    cout << res << endl;

    return 0;
}