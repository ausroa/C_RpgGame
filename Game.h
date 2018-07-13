//
// Created by ausro on 7/12/2018.
//

#ifndef C_RPGGAME_GAME_H
#define C_RPGGAME_GAME_H
#include <iostream>
#include <string>


class Game {
public:
    Game();
    ~Game();

    // Operators

    // Functions
    void Intro();
    void SelectClass();

    // Accessors
    std::string GetName(){ return name;};

    // Modifiers

private:
    std::string name;
    std::string characterClass;
};


#endif //C_RPGGAME_GAME_H
