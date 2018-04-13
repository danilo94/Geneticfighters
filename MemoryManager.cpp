//
// Created by Danilo on 08/04/2018.
//

#include "MemoryManager.h"

MemoryManager::MemoryManager(string processo) {
    pid = FindProcessId(processo);
    std::cout << "PID: "<< pid << std::endl;
}

DWORD MemoryManager::FindProcessId(const std::string &processName) {
    PROCESSENTRY32 processInfo;
    processInfo.dwSize=(sizeof(processInfo));
    HANDLE processesSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,NULL);
    if (processesSnapshot== INVALID_HANDLE_VALUE){
        return 0;
    }
    Process32First(processesSnapshot,&processInfo);
    if(!processName.compare(processInfo.szExeFile)){
        CloseHandle(processesSnapshot);
        return processInfo.th32ProcessID;
    }
    while (Process32Next(processesSnapshot,&processInfo)){
        if(!processName.compare(processInfo.szExeFile)){
            CloseHandle(processesSnapshot);
            return processInfo.th32ProcessID;
        }
    }
    CloseHandle(processesSnapshot);
    return 0;

}

int MemoryManager::ReadByte(int address) {
    LPCVOID readAddress = (LPCVOID)address;
    unsigned char data;
    DWORD processId = FindProcessId(processo);
    HANDLE hProcess = OpenProcess(PROCESS_VM_READ,0,processId);
    ReadProcessMemory(hProcess,readAddress,&data, sizeof(data),0);
    return (int) data;
}