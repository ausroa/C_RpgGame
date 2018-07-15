//
// Created by ausro on 7/12/2018.
//

#ifndef C_RPGGAME_RANGEDCLASS_H
#define C_RPGGAME_RANGEDCLASS_H

#include <iostream>
#include "Character.h"

class RangedClass: public Character {
public:
    RangedClass();
    ~RangedClass();

    // Functions
    void Initialize(std::string name);
    void PrintStats();

private:

};


#endif //C_RPGGAME_RANGEDCLASS_H
