#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    std::string city;

    std::cout << "Hello! Welcome!" << std::endl;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "How old are you? ";
    std::cin >> age;
    std::cin.ignore(); // Clear the newline from input buffer

    std::cout << "What city are you from? ";
    std::getline(std::cin, city);

    std::cout << "\n--- Greeting Summary ---" << std::endl;
    std::cout << "Hello " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "You are from " << city << "." << std::endl;
    std::cout << "Nice to meet you!" << std::endl;

    return 0;
}