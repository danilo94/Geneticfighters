//
// Created by Danilo on 08/04/2018.
//

#include "GameController.h"
#include "actions.h"

GameController::GameController(string processo) {
    if (processo != ""){
        leitorMemoria = new MemoryManager(processo);
        jogador = new Player(leitorMemoria,true);
    }

}

void GameController::ExecuteProgram() {
    actions programaTeste;
    programaTeste.createRandom();
    while (programaTeste.getActualPosition()<programaTeste.getMaxSize()){
        int acao = programaTeste.getLastCommand();
        jogador->executarAcao(acao);
    }


}
