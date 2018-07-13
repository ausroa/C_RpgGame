//
// Created by ausro on 7/12/2018.
//

#include "../headers/Game.h"

Game::Game() {
    playing = true;
}

Game::~Game() {

}

// Intro To Game
void Game::GameInit() {
    std::string name;
    std::string playerClass;

    std::cout << "####################\n";
    std::cout << "# Welcome to TITLE #" << std::endl;
    std::cout << "####################\n";
    std::cout << "\nWhat is your name? ";
    std::getline(std::cin, name);

    std::cout << "What class would you like to be? \n" << std::endl;
    std::cout << "1. Melee" << std::endl;
    std::cout << "2. Ranged" << std::endl;
    std::cout << "3. Magic\n" << std::endl;
    std::cout << "choice: ";
    std::cin >> playerClass;

    // Game Initialized based off class selection
    if ( playerClass == "Magic" || playerClass == "magic") {
        magicClass.Initialize(name);

    }
    else if (playerClass == "Ranged" || playerClass == "ranged") {
        rangedClass.Initialize(name);
    }
    else if (playerClass == "Melee" || playerClass == "melee") {
        meleeClass.Initialize(name);
    }

}

void Game::MainMenu() {
    std::cout << "======MAIN==MENU======"<< std::endl;
    std::cout << "|| 1. Skills        ||" << std::endl;
    std::cout << "|| 2. Level         ||" << std::endl;
    std::cout << "|| 3. Stats         ||" << std::endl;
    std::cout << "|| 4. Shop          ||" <<std::endl;
    std::cout << "|| 5. Travel        ||" << std::endl;
    std::cout << "|| 6. Inventory     ||" << std::endl;
    std::cout << "|| 7. Quit          ||" << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << "choice: ";
    std::cin >> playerChoice;
    std::cout << std::endl;
}

// Main Menu selection
bool Game::isPlaying() {
    switch (playerChoice) {
        case 3:
            if (magicClass.IsSelected()) {
                magicClass.PrintStats();
            }
            else if (rangedClass.IsSelected()) {
                rangedClass.PrintStats();
            }
            else if (meleeClass.IsSelected()) {
                meleeClass.PrintStats();
            }
            break;
        case 7:
            playing = false;
            break;
        default:
            break;
    }
    return playing;
}


