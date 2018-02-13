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

    //Stack working.
    Stack *myFirstStack = new Stack();

    myFirstStack->push(1,1);
    myFirstStack->push(5,5);
    myFirstStack->push(19,19);
    myFirstStack->display();
    mazeSolver newMaze = mazeSolver();

    newMaze.solveMaze("maze4.txt");





    return 0;
}