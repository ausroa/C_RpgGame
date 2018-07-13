//
// Created by ausro on 7/12/2018.
//

#ifndef C_RPGGAME_MAGICCLASS_H
#define C_RPGGAME_MAGICCLASS_H

#include <iostream>


class MagicClass {

public:
    MagicClass();
    ~MagicClass();

    // Functions
    void Initialize(std::string n);


    // Accessors
    int GetHealthMin() { return healthMin; };
    int GetHealthMax() { return healthMax; };
    int GetStaminaMin() { return staminaMin; };
    int GetStaminaMax() { return staminaMax; };
    int GetDamageMin() { return damageMin; };
    int GetDamageMax() { return damageMax; };
    int GetManaMin() { return manaMin; };
    int GetManaMax() { return manaMax; };
    int GetLevel() { return level; };
    int GetExp() { return level; };

    // Modifiers


private:
    std::string name;
    std::string playerClass;
    int healthMin;
    int healthMax;
    int staminaMin;
    int staminaMax;
    int damageMin;
    int damageMax;
    int manaMin;
    int manaMax;
    int level;
    int exp;

};


#endif //C_RPGGAME_MAGICCLASS_H
