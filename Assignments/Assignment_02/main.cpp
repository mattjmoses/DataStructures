#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include "MazeSolver.h"
#include "Stack.h"
#include "Node.h"
using namespace std;

int main()
{

    cout<< "Please enter a filename" << endl;




    mazeSolver newMaze = mazeSolver();


    newMaze.outputMazeToText(newMaze.stackTracker(newMaze.fillDeadEnds(newMaze.createMazeArray("maze4.txt"))));





    return 0;
}