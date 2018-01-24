#include <iostream>
#include <fstream>
using namespace std;

#include "LinkedList.h"
#include "TextToListParser.h";
#include "UIHandler.h";
#include "TitleDisplay.h";

int main(int argc,char* argv[]) {

    ProgramGraphics graphics;
    graphics.displayTitle();

    //Linked list object
    LinkedList linkedList;
    TextToListParser textToList;
    UIHandler mainUI;


    string inFileName = "test.txt";
    string outFileName = "bwop.txt";



    linkedList = textToList.parseNewList(inFileName);

    mainUI.editText(linkedList,outFileName);
























    return 0;
}