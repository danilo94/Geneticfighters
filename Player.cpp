//
// Created by Danilo on 08/04/2018.
//

#include "Player.h"

Player::Player(MemoryManager *manager,bool debugMode) {
    playerLife = 0;
    playerDistance = 0;
    actions = new KeyBot();
    this->manager = manager;
    debug = debugMode;
}

void Player::updatePlayer() {
    if (manager!= nullptr){
        playerLife = this->manager->ReadByte(PLAYERLIFE);
        playerDistance = this->manager->ReadByte(DISTANCE);
        if (debug){
            std::cout<<"Life: "<<playerLife<<std::endl;
            std::cout<<"Distance between player and enemy: "<<playerDistance<<std::endl;
        }

    }
}

void Player::executarAcao(int command) {
    switch(command){
        case 0:
            std::cout <<"Normal Punch"<<std::endl;
            actions->KeyClick(normalPunch);
            break;
        case 1:
            std::cout <<"Strong Punch"<<std::endl;
            actions->KeyClick(strongPunch);
            break;
        case 2:
            std::cout <<"Strong Kick"<<std::endl;
            actions->KeyClick(strongKick);
            break;
        case 3:
            std::cout <<"Up"<<std::endl;
            actions->KeyClick(Up);
            break;
        case 4:
            std::cout <<"Down"<<std::endl;
            actions->KeyClick(Down);
            break;
        case 5:
            std::cout <<"Left"<<std::endl;
            actions->KeyClick(Left);
            break;
        case 6:
            std::cout <<"Right"<<std::endl;
            actions->KeyClick(Right);
            break;
    }
}
