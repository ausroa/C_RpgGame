//
// Created by ausro on 7/12/2018.
//

#ifndef C_RPGGAME_GAME_H
#define C_RPGGAME_GAME_H
#include <iostream>
#include <string>
#include "Character.h"


class Game {
public:
    Game();
    ~Game();

    // Operators

    // Functions
    void Intro();
    void SelectClass();
    void MainMenu();
    bool isPlaying();

    // Accessors
    std::string GetClass(){ return characterClass;};
    bool GetPlaying() { return playing; };
    int GetPlayerChoice() { return playerChoice; };

    // Modifiers

private:
    std::string characterClass;
    int playerChoice;
    bool playing;
};


#endif //C_RPGGAME_GAME_H
