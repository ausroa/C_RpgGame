//
// Created by ausro on 7/12/2018.
//

#ifndef C_RPGGAME_CHARACTER_H
#define C_RPGGAME_CHARACTER_H


#include <string>

class Character {
public:
    Character();
    ~Character();

    // Functions
    void Initialize(int level, std::string name);

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