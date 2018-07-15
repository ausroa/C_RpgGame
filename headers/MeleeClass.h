//
// Created by ausro on 7/12/2018.
//

#ifndef C_RPGGAME_MELEECLASS_H
#define C_RPGGAME_MELEECLASS_H

#include <iostream>
#include "Character.h"

class MeleeClass: public Character {
public:
    MeleeClass();
    ~MeleeClass();

    void Initialize(std::string name);
    void PrintStats();

private:
};


#endif //C_RPGGAME_MELEECLASS_H
