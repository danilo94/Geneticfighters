//
// Created by Danilo on 08/04/2018.
//

#include "KeyBot.h"

void KeyBot::KeyUp(char key) {
    _buffer->ki.wScan = key;
    _buffer->ki.dwFlags = KEYEVENTF_SCANCODE;
    SendInput( 1, _buffer, sizeof( INPUT ) );
}

void KeyBot::KeyDown(char key) {
    _buffer->ki.wScan = key;
    _buffer->ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
    SendInput( 1, _buffer, sizeof( INPUT ) );
}

void KeyBot::KeyClick(char key) {
    KeyDown( key );
    Sleep( 200 );
    KeyUp( key );
    Sleep( 200 );

}

KeyBot::KeyBot() {
    _buffer->ki.wVk =0;
    _buffer->type = INPUT_KEYBOARD;
    _buffer->ki.time = 0;
    _buffer->ki.dwExtraInfo = 0;
}