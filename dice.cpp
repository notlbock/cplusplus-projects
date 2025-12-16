#include <iostream>
#include <string>
#include <random>

class Random {
public:
    static int get(int min, int max) {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dis(min, max);
        return dis(gen);
    }
};

int main() {
    int diceInt = Random::get(1, 6);
    std::string diceInput;

    std::cout << "Guess the dice roll (1-6): ";
    std::cin >> diceInput;

    int strToInt_Dice;

    try {
        strToInt_Dice = std::stoi(diceInput);
    } catch (...) {
        std::cout << "Invalid input! Please enter a number.\n";
        return 1;
    }

    if (strToInt_Dice < 1 || strToInt_Dice > 6) {
        std::cout << "Number must be between 1 and 6.\n";
        return 1;
    }

    if (strToInt_Dice == diceInt) {
        std::cout << "You won!\n";
    } else {
        std::cout << "You lost :( The number was " << diceInt << ".\n";
    }

    return 0;
}
