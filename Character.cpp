//
// Created by ausro on 7/12/2018.
//

#include <iostream>
#include "Character.h"

Character::Character() {
    name = "";
    healthMin = 0;
    healthMax = 0;
    staminaMax = 0;
    staminaMin = 0;
    damageMin = 0;
    damageMax = 0;
    manaMin = 0;
    manaMax = 0;
    level = 1;
    exp = 0;
}

Character::~Character() {

}

void Character::Initialize(int level, std::string name) {
    name = "";
    this -> healthMin = 10;
    this -> healthMax = 100;
    this -> staminaMax = 100;
    this -> staminaMin = 10;
    this -> damageMin = 2;
    this -> damageMax = 4;
    this -> manaMin = 10;
    this -> manaMax = 100;
    this -> level = 1;
    this -> exp = 0;
}


