//
// Created by Danilo on 08/04/2018.
//

#ifndef GENETICFIGHTERS_CONSTANTS_H
#define GENETICFIGHTERS_CONSTANTS_H
// https://docs.microsoft.com/en-us/previous-versions/visualstudio/visual-studio-6.0/aa299374(v=vs.60)


// Endereços de memoria zsnesw
const int TIME = 0x0072cf30;
const int ENEMYLIFE =0x0072C37A;
const int PLAYERLIFE =0x0072C17A;
const int PLAYERISJUMP =0x0072C11A;
const int LOSES =0x0072C338;
const int WINS =0x0072C138;
const int DISTANCE =0x0072C11C;

// Endereços de memoria teclado
const int normalPunch =0x1E; // A
const int strongPunch =0x1F; // S
const int strongKick =0x2D; // X
const int Up =0x12; // E
const int Down =0x10; // Q
const int Left =0x15; // Y
const int Right =0x16; // U

const int MAXLENGTH = 1000; // Max number of actions stored inside a action program

#endif //GENETICFIGHTERS_CONSTANTS_H
