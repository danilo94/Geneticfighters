//
// Created by Danilo on 08/04/2018.
//

#ifndef GENETICFIGHTERS_PLAYER_H
#define GENETICFIGHTERS_PLAYER_H

#include "constants.h"
#include "MemoryManager.h"
#include "KeyBot.h"

class Player {
private:
    int playerLife;
    int playerDistance;
    MemoryManager *manager;
    bool debug;
    KeyBot *actions;
public:
    Player(MemoryManager *manager, bool debugMode);
    void updatePlayer();
    void executarAcao(int command);
};




#endif //GENETICFIGHTERS_PLAYER_H
