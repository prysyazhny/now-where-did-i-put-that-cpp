#include <iostream>

#include "src/where.hpp"

int main() {
    std::cout << "\nWelcome to the String Finding Program!\n" << std::endl;

    std::cout << "Enter your string:" << std::endl;
    std::string userInput;
    std::getline(std::cin, userInput);

    std::cout << "What do you want to find:" << std::endl;
    std::string searchString;
    std::getline(std::cin, searchString);

    if (searchString.size() == 1) {
        char searchChar = searchString[0];
        std::cout << "\nCharacter found at index: " << findString(userInput, searchChar) << "\n" << std::endl;
    } else {
        std::cout << "\nSubstring found at index: " << findString(userInput, searchString) << "\n" << std::endl;
    }
}