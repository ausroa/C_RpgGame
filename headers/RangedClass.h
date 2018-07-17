//
// Created by ausro on 7/12/2018.
//

#ifndef C_RPGGAME_RANGEDCLASS_H
#define C_RPGGAME_RANGEDCLASS_H

#include <iostream>
#include "Character.h"
#include <string>

using namespace std;

class RangedClass: public Character {
private:
    string weapons[3] = {"Bow and Arrow", "Daggers", "Crossbow"};
    const enum WeaponTypes{
        BOWANDARROW = 0,
        DAGGERS = 1,
        CROSSBOW = 2
    };
    int weaponType;
    WeaponTypes weaponTypeEnum;
public:
    void setWeaponType(int weaponType);

public:
    RangedClass();
    ~RangedClass();

    // Functions
    void Initialize(std::string name);
    void PrintStats();

    string getWeaponType() const;


    string displayWeaponTypes();

    WeaponTypes getWeaponTypeEnum() const;

    void setWeaponTypeEnum(int weaponType);

};


#endif //C_RPGGAME_RANGEDCLASS_H
