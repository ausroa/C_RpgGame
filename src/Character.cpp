//
// Created by ausro on 7/12/2018.
//
//****************************
// Header Might not be needed
//****************************

#include <iostream>
#include "../headers/Character.h"

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

    level = 0;
    exp = 0;
    expNext;

    defense = 0;
    strength = 0;
    magic = 0;
    accuracy = 0;
    luck = 0;
    speech = 0;
    stamina = 0;
    vitality = 0;
}

Character::~Character() {

}

void Character::levelUp() {
    if (exp >= expNext) {
        level++;
    }
}
/*
void Character::isSelected(std::string playerClass) {

}

void Character::Initialize(std::string name, std::string playerClass) {
    this -> name = name;
    this -> playerClass = playerClass;
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
*/





