#include <iostream>
#include <math.h>
#include "../headers/Game.h"

int main() {
    Game FGame;
    // Character FCharacter;

    FGame.GameInit();

    while (FGame.GetPlaying()) {
        FGame.MainMenu();
        FGame.isPlaying();
    }

    return 0;
}