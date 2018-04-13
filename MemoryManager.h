//
// Created by Danilo on 08/04/2018.
//

#ifndef GENETICFIGHTERS_MEMORYMANAGER_H
#define GENETICFIGHTERS_MEMORYMANAGER_H


#include <iostream>
#include <Windows.h>
#include <tlhelp32.h>
#include <unistd.h>
#include <string>

using namespace std;
class MemoryManager {
public:
    MemoryManager(string processo);
    int ReadByte(int address);

private:
    DWORD pid = 0x0;
    string processo = "zsnesw.exe";
    DWORD FindProcessId(const std::string& processName);
};


#endif //GENETICFIGHTERS_MEMORYMANAGER_H
