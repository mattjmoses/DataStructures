#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include "mazeSolver.h"
using namespace std;

int main()
{

    mazeSolver newMaze = mazeSolver();

    newMaze.solveMaze("maze.txt");
//    //Text file for maze
//    ifstream readFile;
//    readFile.open("maze.txt");
//    string textLine;
//    //Counting the rows
//    int rowcount = -1;
//    //Counting the columns
//    int colCount = 0;
//
//    //We get the dimensions of the maze by scanning the text file.
//    if(readFile.is_open())
//    {
//        while(getline(readFile,textLine))
//        {
//
//            //counting the rows
//            rowcount ++;
//            //getting the max num of columns
//            if(textLine.length() > colCount)
//            {
//                colCount = textLine.length();
//            }
//        }
//
//    }
//
//    readFile.close();
//
//    cout << "Row count: " << rowcount << endl;
//    cout << "Columns: " << colCount << endl;
//
//    //New empty dynamic array.
//    char **mazeArray;
//    mazeArray = new char *[rowcount];
//    //Creating all the columns from the maze data
//    for (int i = 0; i < rowcount; i++)
//    {
//        mazeArray[i] = new char[colCount];
//    }
//
//    ifstream mazeFile("maze.txt");
//    string mazeText;
//    string appendMazeLine;
//    int row = -1;
//    //I think this works...
//    if(mazeFile.is_open())
//    {
//        while(getline(mazeFile,mazeText))
//        {
//
//            row ++;
//            //SO. If the text line is the same length as the col count then append to the maze
//            //HOWEVER...
//            if(mazeText.length() == colCount)
//            {
//                for(int j = 0; j < colCount; j++)
//                {
//
//                    mazeArray[row][j] = mazeText[j];
//                }
//
//            }
//        }
//    }
//
//    //Okay. Taking a knee on the goddamn last line for now.
//    int wallCount;
//    bool deadEnds = true;
//   while(deadEnds)
//   {
//       deadEnds = false;
//       for(int i = 0; i < rowcount; i++)
//       {
//
//
//           for(int j = 0; j < colCount; j++)
//           {
//               wallCount = 0;
//               //Check all white space for dead ends
//               //Don't check the first point.
//               if((mazeArray[i][j] == ' ') &&  (i !=0 && j !=0))
//               {
//                    if(i == 49 && j == 50)
//                   {
//                       continue;
//                   }
//                       //Check North
//                       if(mazeArray[i-1][j] != ' ')
//                       {
//                           wallCount ++;
//                       }
//                       //Check South
//                       if(mazeArray[i+1][j] != ' ')
//                       {
//                           wallCount ++;
//                       }
//                       //Check East
//                       if(mazeArray[i][j+1] != ' ')
//                       {
//                           wallCount ++;
//                       }
//                       //Check West
//                       if(mazeArray[i][j-1] != ' ')
//                       {
//                           wallCount ++;
//                       }
//                       //If the white space is surrounded by three walls that means it's a dead end
//                       //Mark it with X to
//                       if(wallCount == 3)
//                       {
//                           mazeArray[i][j] = 'X';
//                           deadEnds = true;
//                       }
//
//
//               }
//               cout << mazeArray[i][j];
//           }
//
//           cout << endl;
//       }
//        //cout << "Exit ="<< mazeArray[49][50] << endl;
//   }
//    for(int i = 0; i < rowcount; i++)
//    {
//        for(int j = 0; j < colCount; j++)
//        {
//            if(mazeArray[i][j] == ' ')
//            {
//                mazeArray[i][j] = '@';
//                cout << mazeArray[i][j];
//            }
//            else if(mazeArray[i][j] == 'X')
//            {
//                mazeArray[i][j] = ' ';
//                cout << mazeArray[i][j];
//            }
//            else
//            {
//                cout << mazeArray[i][j];
//            }
//        }
//        cout << endl;
//    }




    return 0;
}