#include <iostream>
#include <fstream>
using namespace std;

#include "LinkedList.h"

int main(int argc,char* argv[]) {

    //Linked list object
    LinkedList linkedList;
    //storing text in a variable
    string textLine;
    //Testing out our text file
    ifstream file("test.txt");
    if(file.is_open())
    {
        while(getline(file,textLine))
        {
            linkedList.CreateNode(textLine);
        }
    }
    linkedList.ReadNodes();
    cout << "=========================================================================" << endl;
    cout << "Please choose a command"<< endl;
    cout <<"=========================================================================="<< endl;
    cout << "(I) -Inserts a new line at a specified number"<< endl;
    cout << "(D) -Deletes either a single line or a range of lines" << endl;
    cout << "(V) -View entire contents of the file" << endl;
    cout << "(G) -Goes to the specefied line number inputted" << endl;
    cout << "(L) -Lists current lines in the buffer" << endl;
    cout << "(S) -Substitutes a new line. Enter line number and input new text" << endl;
    cout << "(E) -Exits the program and writes any changes to the specified text file" << endl;
    cout << "(Q) -Quits the program without saving" << endl;



















    return 0;
}