//
// Created by ausro on 7/12/2018.
//

#include "RangedClass.h"

RangedClass::RangedClass() {
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
    this -> selected = false;
}

RangedClass::~RangedClass() {

}

void RangedClass::Initialize(std::string name) {
    this -> name = name;
    this -> healthMin = 10;
    this -> healthMax = 100;
    this -> staminaMin = 10;
    this -> staminaMax = 100;
    this -> damageMin = 2;
    this -> damageMax = 4;
    this -> manaMin = 10;
    this -> manaMax = 100;
    this -> level = 1;
    this -> exp = 0;
    this -> selected = true;
}

void RangedClass::PrintStats() {
    std::cout << "===========STATS===========" << std::endl;
    std::cout << "      = Ranged Class =" << std::endl;
    std::cout << "= Name: " << this -> name << std::endl;
    std::cout << "= Level: " << this -> level << std::endl;
    std::cout << "= Exp: " << this -> exp << std::endl;
    std::cout << "= Health: " << this -> healthMin << " - " << healthMax << std::endl;
    std::cout << "= Stamina: " << this -> staminaMin << " - " << staminaMax << std::endl;
    std::cout << "= Damage: " << this -> damageMin << " - " << damageMax << std::endl;
    std::cout << "= Mana: " << this -> manaMin << " - " << manaMax << std::endl;
    std::cout << std::endl;
}
