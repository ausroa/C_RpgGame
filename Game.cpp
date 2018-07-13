//
// Created by ausro on 7/12/2018.
//

#include "Game.h"

Game::Game() {
    characterClass = "";
    playing = true;
}

Game::~Game() {

}

void Game::Intro() {
    std::cout << "##################\n";
    std::cout << "#Welcome to TITLE#" << std::endl;
    std::cout << "##################\n";
    std::cout << "\nWhat is your name? ";
    std::getline(std::cin, name);
}

void Game::SelectClass() {
    std::cout << "What class would you like to be? \n" << std::endl;
    std::cout << "1. Melee" << std::endl;
    std::cout << "2. Ranged" << std::endl;
    std::cout << "3. Magic\n" << std::endl;
    std::cout << "choice: ";
    std::cin >> characterClass;
}

void Game::MainMenu() {
    std::cout << "======MAIN==MENU======"<< std::endl;
    std::cout << "1. Skills" << std::endl;
    std::cout << "2. Level" << std::endl;
    std::cout << "3. Stats" << std::endl;
    std::cout << "4. Shop" <<std::endl;
    std::cout << "5. Travel" << std::endl;
    std::cout << "6. Inventory" << std::endl;
    std::cout << "7. Quit" << std::endl;
    std::cout << "choice: ";
    std::cin >> playerChoice;
}

// Main Menu selection
bool Game::isPlaying() {
    switch (playerChoice) {
        case 7:
            playing = false;
            break;
        default:
            break;
    }
}
