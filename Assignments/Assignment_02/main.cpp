#include <cstdlib>
#include <iostream>
#include <fstream>
#include "MazeSolver.h"

using namespace std;

int main(int argc,char* argv[])
{
    //Doing some error checking on the infile.
    try
    {
        string fileName = string(argv[1]);
        ifstream checkFile(fileName);
        if(checkFile.good())
        {
            mazeSolver newMaze = mazeSolver();
            newMaze.solveMaze(fileName);
        }
        else
        {
            cout << "File not found :c" << endl;
        }
    }catch(exception e) {}










    return 0;
}