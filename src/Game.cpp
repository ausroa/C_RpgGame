//
// Created by ausro on 7/12/2018.
//

#include "../headers/Game.h"

Game::Game() {
    playing = true;
}

Game::~Game() {

}

/**
 * Intro of game
 */
void Game::GameInit() {
    std::string checkClass;
    std::string playerClassStats;
    bool yes;

    std::cout << "####################\n";
    std::cout << "# Welcome to TITLE #" << std::endl;
    std::cout << "####################\n";
    std::cout << "\nWhat is your name? ";
    std::getline(std::cin, name);

    std::cout << "What class would you like to be?" << std::endl;
    std::cout << " \n======CLASSES======" << std::endl;

    do {
        std::cout << "1. Melee" << std::endl;
        std::cout << "2. Ranged" << std::endl;
        std::cout << "3. Magic\n" << std::endl;
        std::cout << "Class: ";
        std::cin >> playerClass;

        /**
         * Initiate game based off class selection
         */
        if ( playerClass == "Magic" || playerClass == "magic" || playerClass == "3") {
            magicClass.Initialize(name);
        }
        else if (playerClass == "Ranged" || playerClass == "ranged" || playerClass == "2") {
                rangedClass.Initialize(name);
        }
        else if (playerClass == "Melee" || playerClass == "melee" || playerClass == "1") {
                meleeClass.Initialize(name);
        }

        /**
         * Get weapon type based on class:
         */

        std::cout << "Choose weapon type" << "\n";

        if (rangedClass.GetLevel() >= 0){
            cout << rangedClass.displayWeaponTypes() << "\n";
            string chosenWeaponType;
            cin >> chosenWeaponType;
            rangedClass.setWeaponType(stoi(chosenWeaponType));

            cout<< "test: " << to_string(rangedClass.getWeaponTypeEnum()) << endl;
        }else if (meleeClass.GetLevel() >= 0){

        }else if(magicClass.GetLevel() >= 0) {

        }
        std::cout << "Enter class to check stats: ";
        std::cin >> playerClassStats;

        /**
         * Check status of class based of selection
         */
        if (playerClassStats == "Melee" || playerClassStats == "melee") {
            meleeClass.PrintStats();
        }
        else if (playerClassStats == "Ranged" || playerClassStats == "ranged") {
            rangedClass.PrintStats();
        }
        else if (playerClassStats == "Magic" || playerClassStats == "magic") {
            magicClass.PrintStats();
        }

        std::cout << "\nAre you sure you want to use " << playerClass << " class? yes/no" << std::endl;
        std::cin >> checkClass;

        yes = checkClass == "Yes" || checkClass == "yes";

    } while (!yes);
}

void Game::MainMenu() {
    std::cout << "\n======MAIN==MENU======"<< std::endl;
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

/**
 * Menu selection
 * @return is game still playing
 */
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
        case 5:
            travel();
            break;
        case 6:
            inventoryContents.printInventoryContents();
            break;
        case 7:
            playing = false;
            break;
        default:
            break;
    }
    return playing;
}

void Game::gameIntro() {
    std::cout << "Welcome to your own adventure! Your name is " << name;

    // If user input for playerclass is a integer convert it to the proper class
    if (playerClass == "1") {
        playerClass = "Melee";
    }
    else if (playerClass == "2") {
        playerClass = "Ranged";
    }
    else if (playerClass == "3") {
        playerClass = "Magic";
    }

    std::cout << ". The class your chose is " << playerClass << ".\n" << std::endl;
}

void Game::travel() {
    // Print locations of travel to user
    std::cout << "========== Travel ==========" << std::endl;
    std::cout << "|| 1. Home                ||" << std::endl;
    std::cout << "|| 2. World 1             ||" << std::endl;
    std::cout << "|| 3. World 2             ||" << std::endl;
    std::cout << "|| 4. World 3             ||" << std::endl;
    std::cout << "============================\n" << std::endl;
}

void Game::gameStart() {
    // Prompt travel locations
    travel();

    // Ask user to where they would like to travel too
    std::cout << "Where would you like to travel too? ";
    std::cin >> playerTravel;

    // Check players input for the location to travel too
    if (playerTravel == 1) {
        // TODO Home
    }
    else if (playerTravel == 2) {
        // TODO World 1
    }
    else if (playerTravel == 3) {
        // TODO World 2
    }
    else if (playerTravel == 4) {
        // TODO World 3
    }
}
