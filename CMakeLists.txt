cmake_minimum_required(VERSION 3.10)
project(C_RpgGame)

set(CMAKE_CXX_STANDARD 11)

add_executable(C_RpgGame sources/Main.cpp sources/Game.cpp headers/Game.h sources/MagicClass.cpp headers/MagicClass.h sources/RangedClass.cpp headers/RangedClass.h sources/MeleeClass.cpp headers/MeleeClass.h Character.cpp headers/Character.h)