#include <iostream>
#include <fstream>
using namespace std;

#include "LinkedList.h"
#include "TextToListParser.h";
#include "UIHandler.h";
#include "ProgramGraphics.h";

int main(int argc,char* argv[]) {

    ProgramGraphics graphics;
    graphics.displayTitle();

    //Linked list object
    LinkedList linkedList;
    TextToListParser textToList;
    UIHandler mainUI;

    string inFileName = "test.txt";
    string outFilename = "NOTHING YET!";

    //Hitch. Passing text file into a goddamn method. HUH!
    //Oh wait. Let's just pass the fucking file name in and let the method open it.
    //DUUUUUHHHHHHHHHH :I
    linkedList = textToList.parseNewList(inFileName);
    mainUI.editText(linkedList);
























    return 0;
}