//
// Created by Danilo on 08/04/2018.
//

#ifndef GENETICFIGHTERS_ACTIONS_H
#define GENETICFIGHTERS_ACTIONS_H
#include <ctime>
#include <cstdlib>
#include "constants.h"
#include <vector>
#include <iostream>

class actions {
public:
    actions();
    void createRandom();
    int getLastCommand();

    int getMaxSize() const;

    int getActualPosition() const;

private:
    int maxSize;
    int actualPosition;
    int fitnessClass;
    int program[MAXLENGTH];
};




#endif //GENETICFIGHTERS_ACTIONS_H
