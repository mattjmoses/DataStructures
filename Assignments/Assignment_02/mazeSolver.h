//
// Created by matt on 12/02/18.
//
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#ifndef ASSIGNMENT_02_MAZESOLVER_H
#define ASSIGNMENT_02_MAZESOLVER_H

//Class contains all the functionality for solving the maze.
class mazeSolver
{
    public:
    mazeSolver(); //The ol default constructor.
    ~mazeSolver(); //The ol' default destructor.

    //Maze solver method
    void solveMaze(string);
};


#endif //ASSIGNMENT_02_MAZESOLVER_H
