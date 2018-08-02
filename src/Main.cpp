#include <iostream>
#include <math.h>
#include "../headers/Game.h"


int main() {
    Game FGame;

    FGame.GameInit();

    // Prompt menu options to user and keep looping until user selects quit
    while (FGame.GetPlaying()) {
        FGame.MainMenu();
        FGame.isPlaying();
    }
    FGame.gameIntro();
    FGame.gameStart();
    return 0;
}
