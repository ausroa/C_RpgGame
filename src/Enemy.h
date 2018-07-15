//
// Created by ausro on 7/14/2018.
//

#ifndef C_RPGGAME_ENEMY_H
#define C_RPGGAME_ENEMY_H


class Enemy {
public:

    Enemy();
    ~Enemy();

    int GetLevelMax() {return levelMax;};
    int GetLevelMin() {return levelMin;};
    int GetHealthMax() {return healthMax;};
    int GetHealthMin() {return healthMin;};
    int GetDamageMax() {return damageMax;};
    int GetDamageMin() {return damageMin;};
    int GetDefenseMax() {return defenseMax;};
    int GetDefenseMin() {return defenseMin;};
    int GetStaminaMax() {return staminaMax;};
    int GetStaminaMin() {return staminaMin;};
    int GetAccuracy()  {return accuracy;};
    int GetExp() {return exp;};

protected:
    int levelMax;
    int levelMin;
    int healthMax;
    int healthMin;
    int damageMax;
    int damageMin;
    int defenseMax;
    int defenseMin;
    int staminaMax;
    int staminaMin;
    int accuracy;
    int exp;


};


#endif //C_RPGGAME_ENEMY_H
