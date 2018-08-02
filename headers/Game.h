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
private:
    int playerChoice;
    int playerTravel;
    bool playing;
    std::string playerClass;
    std::string name;

    // Character related
    MagicClass magicClass;
    RangedClass rangedClass;
    MeleeClass meleeClass;
    inventory inventoryContents;

public:
    Game();
    ~Game();

    // Operators

    // Functions
    void GameInit();
    void MainMenu();
    bool isPlaying();
    void gameIntro();
    void gameStart();
    void travel();

    // Accessors
    int GetPlayerChoice() { return playerChoice; };
    bool GetPlaying() { return playing; };
    std::string getName() { return name ;};
    std::string getPlayerClass() { return playerClass; };

    // Modifiers

};


#endif //C_RPGGAME_GAME_H
