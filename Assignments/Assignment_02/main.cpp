#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
//    ifstream readFile("maze.txt");
//    string textLine;
//    int rowcount = -1;
//    //We got the dimensions of the maze.
//    //Next we need to read the maze in line by line and pull the string into a bunch of chars...
//    if(readFile.is_open())
//    {
//        while(getline(readFile,textLine))
//        {
//            rowcount ++;
//            cout << "Rows in Maze"<< rowcount<< endl;
//            cout << textLine.length() << endl;
//        }
//    }
//    //New empty dynamic array.
//    char **newArray;
//    int rows = 9;
//    int col = 40;
//    newArray = new char *[rows];
//    for (int i = 0; i < rows; i++)
//    {
//        newArray[i] = new char[col];
//    }
//
//    //Setting the values for the  2D array.
//    for(int i = 0; i < rows; i++)
//    {
//        for(int j = 0; j < col; j++)
//        {
//            newArray[i][j] = '+';
//        }
//    }
//
//    for(int i = 0; i < rows; i++)
//    {
//        for(int j = 0; j < col; j++)
//        {
//            cout << newArray[i][j];
//        }
//        cout << endl;
//    }


    //We don't even need to goddamn convert the string to a char array. It plays just fine! HUH
    string bob = "Bob Dole";
    char dole;
    dole = bob[5];
    cout << bob[0] << endl;
    cout << dole << endl;

    return 0;
}