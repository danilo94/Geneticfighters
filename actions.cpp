//
// Created by Danilo on 08/04/2018.
//


#include "actions.h"

actions::actions() {
    srand (time(NULL));
    maxSize = MAXLENGTH;
    actualPosition = 0;
}
void actions::createRandom() {
    for (int i=0; i<maxSize; i++){
        int value = rand()%7;
        program[i] = value;
        std::cout << value << " ";
    }
    std::cout<<std::endl;
}

int actions::getLastCommand() {
    int acao = program[actualPosition];
    actualPosition++;
    return acao;

}

int actions::getMaxSize() const {
    return maxSize;
}

int actions::getActualPosition() const {
    return actualPosition;
}