//
// Created by ausro on 7/12/2018.
//

#include <iostream>
#include "Character.h"

Character::Character() {
    name = "";
    health = 100;
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

void Character::setName() {
    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "Hi " + name + "! How far can you get?";
}


