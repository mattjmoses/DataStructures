//
// Created by matt on 12/02/18.
//
#include <iostream>
#include <fstream>
#include <cstring>
#include "Stack.h"
using namespace std;

#ifndef ASSIGNMENT_02_MAZESOLVER_H
#define ASSIGNMENT_02_MAZESOLVER_H

//Class contains all the functionality for solving the maze.
class mazeSolver
{
    public:
    mazeSolver(); //The ol default constructor.
    ~mazeSolver(); //The ol' default destructor.

    //Creates a 2D array for the maze based on a text file
    char** createMazeArray(string);
    char** fillDeadEnds(char**); //Performs a dead end fill to speed up the stack track
    void displayMaze(char**); //Shows the maze in the console
    char** stackTracker(char**); //Finds the solution to the maze using a STACK
    void outputMazeToText(char**); //Writes the maze to a text file

    private:
    //Array what holds the maze
    char **mazeArray;
    //Handles the row and col count
    int rowCount;
    int colCount;

    //void fillDeadEnds(char **mazeArray);
};


#endif //ASSIGNMENT_02_MAZESOLVER_H
