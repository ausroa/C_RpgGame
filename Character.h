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

    // Accessors
    std::string GetName() { return name; }

    // Modifiers
    void setName();

private:
    std::string name;
    int health;
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
