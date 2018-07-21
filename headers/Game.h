//
// Created by ausro on 7/12/2018.
//

#ifndef C_RPGGAME_GAME_H
#define C_RPGGAME_GAME_H
#include <iostream>
#include <string>
#include "Character.h"
#include "MagicClass.h"
#include "RangedClass.h"
#include "MeleeClass.h"
#include "inventory.h"


class Game {
public:
    Game();
    ~Game();

    // Operators

    // Functions
    void GameInit();
    void MainMenu();
    bool isPlaying();

    // Accessors
    int GetPlayerChoice() { return playerChoice; };
    bool GetPlaying() { return playing; };

    // Modifiers

private:
    int playerChoice;
    bool playing;

    // Character related
    MagicClass magicClass;
    RangedClass rangedClass;
    MeleeClass meleeClass;
    inventory inventoryContents;
};


#endif //C_RPGGAME_GAME_H
