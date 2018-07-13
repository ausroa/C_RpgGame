//
// Created by ausro on 7/12/2018.
//

#include "Game.h"

Game::Game() {
    characterClass = "";

}

Game::~Game() {

}

void Game::Intro() {
    std::cout << "Welcome to TITLE" << std::endl;
    std::cout << std::endl;
}

void Game::SelectClass() {
    std::cout << "What class would you like to be? \n" << std::endl;
    std::cout << "1. Melee" << std::endl;
    std::cout << "2. Ranged" << std::endl;
    std::cout << "3. Magic\n" << std::endl;
    std::cin >> characterClass;
}

void Game::MainMenu() {


}
