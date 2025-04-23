// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: March , 2025
//

#include <iostream>
// adds iostream library
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    srand(time(0));
    int random = rand() % 9 + 1;
    std::cout << random << std::endl;
    while (true) {
        std::string userInp;
        std::cout << "Guess a number 0-9: ";
        std::cin >> userInp;
        try {
            int userInt = std::stoi(userInp);
            if (userInt == random) {
                std::cout << "You guessed right!" << std::endl;
                break;
            } else {
                std::cout << userInt << " is wrong, try again" << std::endl;
            }
        }
        catch (const std::invalid_argument&) {
            std::cout << userInp << " is not an integer" << std::endl;
        }
    }
}
