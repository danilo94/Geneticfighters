//
// Created by Danilo on 08/04/2018.
//

#ifndef GENETICFIGHTERS_GAMECONTROLLER_H
#define GENETICFIGHTERS_GAMECONTROLLER_H

#include <iostream>
#include "Player.h"
#include "MemoryManager.h"
class GameController {
private:
    Player *jogador;
    MemoryManager *leitorMemoria;


public:
    GameController(string processo);
    void ExecuteProgram();

};


#endif //GENETICFIGHTERS_GAMECONTROLLER_H
