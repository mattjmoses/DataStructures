//
// Created by matt on 12/02/18.
//

#include "MazeSolver.h"

//I figured this one out on my own. Read a wikipedia article on dead end fill though
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
    colCount = 0;

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
char** mazeSolver::fillDeadEnds(char** mazeArray)
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
    return mazeArray;
}
//Uses a stack to solve the maze
char** mazeSolver::stackTracker(char** mazeArray)
{
    //Keeps track of the position in the maze
    int cursorX;
    int cursorY;

    //The ol stack
    Stack cursor;
    //Initializing the stack at the start of the maze
    cursor.push(1,0);
    bool whitespace = true;
    while(whitespace)
    {
        whitespace = false;
        for(int i = 0; i < rowCount; i++)
        {
            cursorX = cursor.displayX();
            cursorY = cursor.displayY();
            //Pathfinding through the maze
            for(int j = 0; j< colCount; j++)
            {
                //If the maze gets to the end mark the end point as visited and break the while loop.
                if(cursorX == rowCount -2 && cursorY == colCount -2)
                {
                    mazeArray[i][j] = 'O';
                    whitespace = false;
                    break;
                }
                //Checking the loop is on the same position as the cursor
                if(cursorX == i && cursorY == j)
                {

                    //Check North
                    if(mazeArray[i-1][j] == ' ')
                    {
                        //If the space has a viable neighbor mark the current space as visited and push the
                        //location of the neighbor to the top of the stack. It will be checked on the next loop
                        mazeArray[i][j] = 'O';
                        cursor.push(i-1,j);
                        //Adding the stack values to this here array so we can actually look at them.
                        cursorX = cursor.displayX();
                        cursorY = cursor.displayY();
                        whitespace = true;
                    }//Check South
                    else if(mazeArray[i+1][j] == ' ')
                    {
                        mazeArray[i][j] = 'O';
                        cursor.push(i+1,j);
                        cursorX = cursor.displayX();
                        cursorY = cursor.displayY();
                        whitespace = true;
                    }//Check East
                    else if(mazeArray[i][j+1] == ' ')
                    {
                        mazeArray[i][j] = 'O';
                        cursor.push(i,j+1);
                        cursorX = cursor.displayX();
                        cursorY = cursor.displayY();
                        whitespace = true;
                    }//Check West
                    else if(mazeArray[i][j-1] == ' ')
                    {
                        mazeArray[i][j] = 'O';
                        cursor.push(i,j-1);
                        cursorX = cursor.displayX();
                        cursorY = cursor.displayY();
                        whitespace = true;
                    }
                        //Checking for bottlenecks
                    else
                    {
                        //If the point in the array has no viable neighbors mark the current position as X
                        //then pop the top entry from the stack. This will effectively backtrack until
                        //the loop hits a point with a viable neighbor
                        cursor.pop();
                        mazeArray[i][j] = 'X';
                        cursorX = cursor.displayX();
                        cursorY = cursor.displayY();
                        whitespace = true;
                    }


                }

            }
        }
    }

    return mazeArray;
}
//Displays the maze in the console
void mazeSolver::displayMaze(char** mazeArray)
{
    //Looping through the maze, replacing all X's with whitespace and path points with O's
    for(int i = 0; i < rowCount; i++)
    {
        for(int j = 0; j < colCount; j++)
        {
            if(mazeArray[i][j] == 'O')
            {
                mazeArray[i][j] = '@';
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
void mazeSolver::outputMazeToText(char** mazeArray)
{
    ofstream outFile("SolvedMaze.txt");
    for(int i = 0; i < rowCount; i++)
    {
        for(int w = 0; w < colCount; w++)
        {
            if(mazeArray[i][w] == 'X')
            {
                mazeArray[i][w] = ' ';
                outFile << mazeArray[i][w];
            }
            else if(mazeArray[i][w] == 'O')
            {
                mazeArray[i][w] = '@';
                outFile << mazeArray[i][w];
            }
            else
            {
                outFile << mazeArray[i][w];
            }
        }
        outFile << endl;
    }
    outFile << "Maze Solved Using AwsumSolve" << endl;
}
