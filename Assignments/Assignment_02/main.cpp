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
//    Stack *myFirstStack = new Stack();
    Stack ho;
//
    int barf[1];
    ho.push(1,1);
    ho.push(19,19);
    ho.push(100,27);
    ho.pop();


    //ho.display();
    barf[0] = ho.display()[0];
    barf[1] = ho.display()[1];

    cout << barf[0] << endl;
    cout << barf[1] << endl;




    mazeSolver newMaze = mazeSolver();


    //newMaze.displayMaze(newMaze.fillDeadEnds(newMaze.createMazeArray("maze4.txt")));





    return 0;
}