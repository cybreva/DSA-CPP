#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string name;
    long long age;

    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    std::cout << "enter your age: ";
    std::cin >> age;

    if (std::cin.fail()) {
        std::cout << "bro that’s not even a number 💀\n";
        return 0;
    }

    std::cout << "welcome " << name << "\n";

    if (age <= 0 || age > 120) {
        std::cout << "is this even humanly possible??\n";
    }
    else if (age < 18) {
        std::cout << "minor energy\n";
    }
    else if (age < 70) {
        std::cout << "adult mode\n";
    }
    else {
        std::cout << "senior respect 🫡\n";
    }
}