//
// Created by ausro on 7/12/2018.
//

#ifndef C_RPGGAME_MAGICCLASS_H
#define C_RPGGAME_MAGICCLASS_H

#include <iostream>
#include "Character.h"



class MagicClass: public Character {
private:


public:
    MagicClass();
    ~MagicClass();

    // Functions
    void Initialize(std::string name);
    void PrintStats();
    // Accessors

    // Modifiers



    // Character Related
};


#endif //C_RPGGAME_MAGICCLASS_H
