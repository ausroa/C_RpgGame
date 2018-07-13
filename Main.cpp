#include <iostream>
#include "Game.h"

int main() {
    Game FGame;
    MagicClass magic;
    // Character FCharacter;

    FGame.GameInit();

    while (FGame.GetPlaying()) {
        FGame.MainMenu();
        FGame.isPlaying();
    }

    return 0;
}