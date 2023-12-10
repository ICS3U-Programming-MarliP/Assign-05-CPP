// Copyright (c) 2023 Marli Peters All Rights Reserved
// Created by: Marli Peters
// Date: Dec. 7, 2023
// This program asks the user for a number correlating
// to a farm animal then using a function, finds and displays
// the sound said animal makes.
#include <iostream>

// function to get farm animal sound
std::string farmAnimalSound(int userAnimal) {
    std::string animalSound;
    // use switch case to match integer to sound
    switch (userAnimal) {
        case 1:
            animalSound = "Oink";
            break;
        case 2:
            animalSound = "Neigh";
            break;
        case 3:
            animalSound = "Baa";
            break;
        case 4:
            animalSound = "Cluck";
            break;
        case 5:
            animalSound = "Cockledoodledoo";
            break;
        case 6:
            animalSound = "Bleat";
            break;
        case 7:
            animalSound = "Moo";
            break;
        case 8:
            animalSound = "Hee haw";
            break;
        case 9:
            animalSound = "Woof";
            break;
        case 10:
            animalSound = "Meow";
            break;
    }
    return animalSound;
}

// main function
int main() {
    // opening message
    std::cout << "Hello! Welcome to the farm animal sound program!"
    " You will be asked to input a number correlation with a farm"
    " animal and the program will output the sound it makes. Below"
    " is the list of animals." << std::endl << std::endl << "Pig - 1"
    << std::endl << "Horse - 2" << std::endl << "Sheep - 3" <<
    std::endl << "Chicken - 4" << std::endl << "Rooster - 5" << std::endl
    <<  "Goat - 6" << std::endl << "Cow - 7" << std::endl << "Donkey - 8"
    << std::endl << "Dog - 9" << std::endl << "Cat - 10" << std::endl
    << std::endl;

    // while loop to return errors back to start
    while (true) {
        // get user animal as string
        std::string userAnimalStr;
        std::cout << "Please enter the animal number here: ";
        std::cin >> userAnimalStr;

        // catch invalid numbers
        try {
            int userAnimal;
            userAnimal = std::stoi(userAnimalStr);
            if (userAnimal < 1 || userAnimal > 10) {
                std::cout <<
                "\nPlease enter a number corresponding to a farm animal."
                << std::endl << std::endl;
                continue;
            } else {
                // run the actual function
                std::string animalSound = farmAnimalSound(userAnimal);
                std::cout << "\n"
                          << animalSound << "!\n";
                break;
            }
        } catch (std::invalid_argument) {
            std::cout <<
            "\nPlease enter a number corresponding to a farm animal."
            << std::endl << std::endl;
            continue;
        }

    return 0;
    }
}
