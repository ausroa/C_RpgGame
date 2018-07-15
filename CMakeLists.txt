cmake_minimum_required(VERSION 3.10)
project(C_RpgGame)

set(CMAKE_CXX_STANDARD 11)

add_executable(C_RpgGame src/Main.cpp src/Game.cpp headers/Game.h src/MagicClass.cpp headers/MagicClass.h src/RangedClass.cpp headers/RangedClass.h src/MeleeClass.cpp headers/MeleeClass.h src/Character.cpp headers/Character.h src/Item.cpp headers/Item.h src/inventory.cpp headers/inventory.h src/Enemy.cpp src/Enemy.h)