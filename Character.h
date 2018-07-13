//
// Created by ausro on 7/12/2018.
//
//****************************
// Class might not be needed
//****************************

#ifndef C_RPGGAME_CHARACTER_H
#define C_RPGGAME_CHARACTER_H

#include <string>

class Character {
public:
    Character();
    ~Character();

    // Functions
    void Initialize(std::string name, std::string playerClass);

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


protected:
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


#endif //C_RPGGAME_CHARACTER_H
