//
// Created by Danilo on 08/04/2018.
//

#ifndef GENETICFIGHTERS_KEYBOT_H
#define GENETICFIGHTERS_KEYBOT_H


#define WIN32_LEAN_AND_MEAN
#define _WIN32_WINNT 0x0500
#include <windows.h>

class KeyBot {
private:
    INPUT _buffer[1];

public:
    KeyBot();

    void KeyUp( char key );
    void KeyDown( char key );
    void KeyClick( char key );
};

#endif //GENETICFIGHTERS_KEYBOT_H
