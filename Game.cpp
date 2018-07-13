//
// Created by ausro on 7/12/2018.
//

#include "Game.h"

Game::Game() {
    name = "";
    characterClass = "";

}

Game::~Game() {

}

void Game::Intro() {
    std::cout << "Welcome to TITLE" << std::endl;
    std::cout << "What is your name? " << std::endl;
    std::cout << std::endl;
    std::getline(std::cin, name);

    std::cout << "Hi! " + name + " ! Let's see if you can win.\n" << std::endl;
}

void Game::SelectClass() {
    std::cout << "What class would you like to be? \n" << std::endl;
    std::cout << "1. Melee" << std::endl;
    std::cout << "2. Ranged" << std::endl;
    std::cout << "3. Magic\n" << std::endl;
    std::cin >> characterClass;
}
