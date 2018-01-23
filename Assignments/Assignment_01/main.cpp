#include <iostream>
#include <fstream>
using namespace std;

#include "LinkedList.h"

int main(int argc,char* argv[]) {

    //Linked list object
    LinkedList linkedList;
    //storing text in a variable
    string textLine;
    //Testing out our text file
    ifstream file("test.txt");
    if(file.is_open())
    {
        while(getline(file,textLine))
        {
            cout << textLine << endl;
        }
    }

















    return 0;
}