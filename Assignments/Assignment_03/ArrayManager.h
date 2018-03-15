//
// Created by matt on 13/03/18.
//

#ifndef ASSIGNMENT_03_ARRAYMANAGER_H
#define ASSIGNMENT_03_ARRAYMANAGER_H


class ArrayManager
{
    public:
        ArrayManager(); //The ol' default constructor
        ~ArrayManager(); //The ol' default destructor

        int* createRandomArray(int); //Creates an array based on parameter then shuffles it
};


#endif //ASSIGNMENT_03_ARRAYMANAGER_H
