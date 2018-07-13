//
// Created by ausro on 7/12/2018.
//

#include "MagicClass.h"
#include <math.h>

MagicClass::MagicClass() {
    this -> name = "";
    this -> healthMin = 0;
    this -> healthMax = 0;
    this -> staminaMax = 0;
    this -> staminaMin = 0;
    this -> damageMin = 0;
    this -> damageMax = 0;
    this -> manaMin = 0;
    this -> manaMax = 0;
    this -> level = 0;
    this -> exp = 0;
    this -> expNext = 0;
    this -> selected = false;

}

MagicClass::~MagicClass() {

}

void MagicClass::Initialize(std::string name) {
    this -> name = name;
    this -> healthMin = 10;
    this -> healthMax = 100;
    this -> staminaMin = 10;
    this -> staminaMax = 100;
    this -> damageMin = 2;
    this -> damageMax = 4;
    this -> manaMin = 10;
    this -> manaMax = 200;
    this -> level = 1;
    this -> exp = 0;
    this -> expNext =
            static_cast<int>(50/3) * (pow(level, 3)) -
                    6 * (pow(level, 2)) +
                    ((17 * level - 12));
    this -> selected = true;
}

void MagicClass::PrintStats() {
    std::cout << "===========STATS===========" << std::endl;
    std::cout << "      = Magic Class =" << std::endl;
    std::cout << "= Name: " << this -> name << std::endl;
    std::cout << "= Level: " << this -> level << std::endl;
    std::cout << "= Exp: " << this -> exp << std::endl;
    std::cout << "= Health: " << this -> healthMin << " - " << healthMax << std::endl;
    std::cout << "= Stamina: " << this -> staminaMin << " - " << staminaMax << std::endl;
    std::cout << "= Damage: " << this -> damageMin << " - " << damageMax << std::endl;
    std::cout << "= Mana: " << this -> manaMin << " - " << manaMax << std::endl;
    std::cout << std::endl;
}




