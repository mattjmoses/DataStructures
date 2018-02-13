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
    Stack ho;

    ho.push(1,1);
    ho.display();
    myFirstStack->push(1,1);
    myFirstStack->push(5,5);
    myFirstStack->push(19,19);
    myFirstStack->display();
    mazeSolver newMaze = mazeSolver();

    newMaze.createMazeArray("mazex.txt");





    return 0;
}