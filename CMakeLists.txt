cmake_minimum_required(VERSION 3.8)
project(geneticFighters)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp constants.h KeyBot.cpp KeyBot.h MemoryManager.cpp MemoryManager.h Player.cpp Player.h GameController.cpp GameController.h actions.cpp actions.h)
add_executable(geneticFighters ${SOURCE_FILES})