//
// Created by matt on 12/02/18.
//

#include "MazeSolver.h"

//Setting up the default rowcounts and the like.
mazeSolver::mazeSolver()
{

}





mazeSolver::~mazeSolver() = default;


char** mazeSolver::createMazeArray(string textFile)
{
    //Text file for maze
    ifstream readFile;
    readFile.open(textFile);
    string textLine;
    //Counting the rows
    rowCount = -1;
    //Counting the columns
    int colCount = 0;

    //We get the dimensions of the maze by scanning the text file.
    if(readFile.is_open())
    {
        while(getline(readFile,textLine))
        {
            //counting the rows
            rowCount ++;
            //getting the max num of columns
            if(textLine.length() > colCount)
            {
                colCount = textLine.length();
            }
        }

    }
    //Closing up the read file.
    readFile.close();
    cout << "Row count: " << rowCount << endl;
    cout << "Columns: " << colCount << endl;


    //Setting up the array based on the information from the text file.
    mazeArray = new char *[rowCount];
    //Creating all the columns from the maze coords
    for (int i = 0; i < rowCount; i++)
    {
        mazeArray[i] = new char[colCount];
    }
    //Re-scanning the text file to input the maze info.
    ifstream arrMazeFile(textFile);
    string mazeText;
    string appendMazeLine;
    int row = -1;

    //Adding the data to the 2D array
    if(arrMazeFile.is_open())
    {
        while(getline(arrMazeFile,mazeText))
        {

            row ++;

            if(mazeText.length() < colCount)
            {
                mazeText.append("\r");
            }
            if(mazeText.length() == colCount)
            {
                for(int j = 0; j < colCount; j++)
                {

                    mazeArray[row][j] = mazeText[j];
                }

            }
        }
    }

    //returns the newly made maze
    return mazeArray;
}
//Performs a dead end fill on the maze
void mazeSolver::fillDeadEnds()
{
    //Stores wall count. If a point on the maze has three walls it's a dead end
    int wallCount;
    //Condition for the while loop
    bool deadEnds = true;
    //If dead ends remain in the maze then fill them
    while(deadEnds)
    {
        deadEnds = false;
        for(int i = 0; i < rowCount; i++)
        {

            for(int j = 0; j < colCount; j++)
            {
                wallCount = 0;
                //Check all white space for dead ends
                //Don't check the first point.
                if((mazeArray[i][j] == ' ') &&  (i !=0 && j !=0))
                {
                    //if we hit the exit don't check it either.
                    if(i == rowCount - 2 && j == colCount -2)
                    {
                        continue;
                    }
                    //Check North
                    if(mazeArray[i-1][j] != ' ')
                    {
                        wallCount ++;
                    }
                    //Check South
                    if(mazeArray[i+1][j] != ' ')
                    {
                        wallCount ++;
                    }
                    //Check East
                    if(mazeArray[i][j+1] != ' ')
                    {
                        wallCount ++;
                    }
                    //Check West
                    if(mazeArray[i][j-1] != ' ')
                    {
                        wallCount ++;
                    }
                    //If the white space is surrounded by three walls that means it's a dead end
                    //Mark it with X to
                    if(wallCount == 3)
                    {
                        mazeArray[i][j] = 'X';
                        deadEnds = true;
                    }
                    //Handles the eventuality of stray whitespace in the maze
                    if(wallCount == 4)
                    {
                        mazeArray[i][j] = 'X';
                        deadEnds = true;
                    }
                }

            }

        }

    }

}
//Uses a stack to solve the maze
void mazeSolver::stackTracker()
{

}
//Displays the maze in the console
void mazeSolver::displayMaze()
{
    //Looping through the maze, replacing all X's with whitespace and path points with O's
    for(int i = 0; i < rowCount; i++)
    {
        for(int j = 0; j < colCount; j++)
        {
            if(mazeArray[i][j] == ' ')
            {
                mazeArray[i][j] = 'O';
                cout << mazeArray[i][j];
            }
            else if(mazeArray[i][j] == 'X')
            {
                mazeArray[i][j] = ' ';
                cout << mazeArray[i][j];
            }
            else
            {
                cout << mazeArray[i][j];
            }
        }
        cout << endl;
    }
}
//Saves the maze to a text file
void mazeSolver::outputMazeToText()
{

}
