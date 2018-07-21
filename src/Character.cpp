//
// Created by ausro on 7/12/2018.
//
//****************************
// Header Might not be needed
//****************************

#include <iostream>
#include "../headers/Character.h"
#include <math.h>

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
    expNext = 0;
    selected = false;

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
        exp -= expNext;
        level++;
        this -> expNext =
                static_cast<int>(50/3) * (pow(level, 3)) -
                6 * (pow(level, 2)) +
                ((17 * level - 12));
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





