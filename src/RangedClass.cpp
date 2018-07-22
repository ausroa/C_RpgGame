//
// Created by ausro on 7/12/2018.
//

#include "../headers/RangedClass.h"
#include <math.h>
#include <string>

using namespace std;

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
    this -> expNext = 0;
    this -> selected = false;

    this -> defense = 0;
    this -> strength = 0;
    this -> magic = 0;
    this -> accuracy = 0;
    this -> luck = 0;
    this -> speech = 0;
    this -> stamina = 0;
    this -> vitality = 0;

    this -> statPoints = 0;
    this -> skillPoints = 0;
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
    this -> expNext =
            static_cast<int>(50/3) * (pow(level, 3)) -
            6 * (pow(level, 2)) +
            ((17 * level - 12));
    this -> selected = true;

    this -> defense = 10;
    this -> strength = 10;
    this -> magic = 10;
    this -> accuracy = 10;
    this -> luck = 10;
    this -> speech = 10;
    this -> stamina = 10;
    this -> vitality = 10;

    this -> statPoints = 0;
    this -> skillPoints = 0;
}

void RangedClass::PrintStats() {
    std::cout << "\n===========STATS===========" << std::endl;
    std::cout << "      = Ranged Class =" << std::endl;
    std::cout << "= Name: " << this -> name << std::endl;
    std::cout << "= Level: " << this -> level << std::endl;
    std::cout << "= Exp to next level: " << this -> expNext << std::endl;
    std::cout << "= Exp: " << this -> exp << std::endl;
    std::cout << "= Health: " << this -> healthMin << " - " << healthMax << std::endl;
    std::cout << "= Stamina: " << this -> staminaMin << " - " << staminaMax << std::endl;
    std::cout << "= Damage: " << this -> damageMin << " - " << damageMax << std::endl;
    std::cout << "= Mana: " << this -> manaMin << " - " << manaMax << std::endl;
    std::cout << std::endl;
    std::cout << "= Defense: " << this -> defense << std::endl;
    std::cout << "= Strength: " << this -> strength << std::endl;
    std::cout << "= Magic: " << this -> magic << std::endl;
    std::cout << "= Accuracy: " << this -> accuracy << std::endl;
    std::cout << "= Luck: " << this -> luck << std::endl;
    std::cout << "= Speech: " << this -> speech << std::endl;
    std::cout << "= Stamina: " << this -> stamina << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}


/**
 * Displays all weapon types available for this class.
 * @return output - String output of the list
 */
string RangedClass::displayWeaponTypes() {
    string output = "";
    int i = 1;

    double sizeOfArray = sizeof(this->weapons)/sizeof(this->weapons[0]);
    for (int j = 0; j < sizeOfArray ; ++j) {
        output += "" + to_string(i++) + " - " + weapons[j] + "\n";
    }

    return output;
}

/**
 * @return weaponTypeName
 */
string RangedClass::getWeaponType() const {
    string weaponTypeName = weapons[this->weaponType];
    return weaponTypeName;
}

/**
 * @param weaponType
 */
void RangedClass::setWeaponType(int weaponType) {
    setWeaponTypeEnum(weaponType);
    RangedClass::weaponType = weaponType;
}

RangedClass::WeaponTypes RangedClass::getWeaponTypeEnum() const {
    return weaponTypeEnum;
}

void RangedClass::setWeaponTypeEnum(int weaponType) {
    switch (weaponType){
        case 1:
            weaponTypeEnum = BOWANDARROW;
            break;
        case 2:
            weaponTypeEnum = DAGGERS;
            break;
        case 3:
            weaponTypeEnum = CROSSBOW;
            break;
        default:
            weaponTypeEnum = BOWANDARROW;
            break;
    }
}
