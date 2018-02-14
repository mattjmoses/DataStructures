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
   int x;
    int y;


    ho.push(100,27);
    ho.pop();
    ho.push(5,2);

    x = ho.displayX();
    y = ho.displayY();
    //ho.display();

    cout << x << endl;
    cout << y << endl;




    mazeSolver newMaze = mazeSolver();


    newMaze.displayMaze(newMaze.stackTracker(newMaze.fillDeadEnds(newMaze.createMazeArray("maze4.txt"))));





    return 0;
}