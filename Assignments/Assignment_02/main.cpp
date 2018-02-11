#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    //Text file for maze
    ifstream readFile("maze.txt");
    string textLine;
    //Counting the rows
    int rowcount = -1;
    //Counting the columns
    int colCount = 0;
    //We get the dimensions of the maze by scanning the text file.
    if(readFile.is_open())
    {
        while(getline(readFile,textLine))
        {

            //counting the rows
            rowcount ++;
            //getting the max num of columns
            if(textLine.length() > colCount)
            {
                colCount = textLine.length();
            }
        }
    }
    readFile.close();
    cout << "Row count: " << rowcount << endl;
    cout << "Columns: " << colCount << endl;

    //New empty dynamic array.
    char **mazeArray;
    mazeArray = new char *[rowcount];
    //Creating all the columns from the maze data
    for (int i = 0; i < rowcount; i++)
    {
        mazeArray[i] = new char[colCount];
    }

    ifstream mazeFile("maze.txt");
    string mazeText;
    int row = -1;
    //I think this works...
    if(mazeFile.is_open())
    {
        while(getline(mazeFile,mazeText))
        {
            row ++;
            cout << mazeText << endl;

            for(int j = 0; j < colCount; j++)
            {
                mazeArray[row][j] = mazeText[j];
            }
        }
    }

//    //Setting the values for the  2D array.
//    string text;
//    for(int i = 0; i < rowcount; i++)
//    {
//
//        for(int j = 0; j < colCount; j++)
//        {
//            mazeArray[i][j] = textLine[j];
//        }
//    }




    //We don't even need to goddamn convert the string to a char array. It plays just fine! HUH
    string bob = "Bob Dole";
    char dole;
    dole = bob[5];
    cout << bob[0] << endl;
    cout << dole << endl;

    return 0;
}