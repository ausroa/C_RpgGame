#include <iostream>
#include "Game.h"

int main() {
    Game FGame;
    Character FCharacter;

    FGame.Intro();
    FGame.SelectClass();

    while (FGame.GetPlaying()) {
        FGame.MainMenu();
        FGame.isPlaying();
    }

    return 0;
}