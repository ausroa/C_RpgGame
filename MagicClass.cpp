//
// Created by ausro on 7/12/2018.
//

#include "MagicClass.h"

MagicClass::MagicClass() {
    name = "";
    playerClass = "";
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

MagicClass::~MagicClass() {

}

void MagicClass::Initialize(std::string n) {
    this -> name = "";
    this -> playerClass = "";
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
