#include <iostream>

#include <car.hpp>

void mainPrompt(unsigned int* choice);

int main() {
    unsigned int choice = 0;

    do {
        mainPrompt(&choice);
        switch (choice) {
            default:
                std::cerr << "There is no choice such as " << choice << std::endl;
        }
    } while (choice != 10);

    return 0;
}

void mainPrompt(unsigned int* choice) {
    std::cout << "1. Add a car" << std::endl;
    std::cout << "2. Add a customer" << std::endl;
    std::cout << "3. Rent a car" << std::endl;
    std::cout << "4. Return a car" << std::endl;
    std::cout << "5. Display all cars" << std::endl;
    std::cout << "6. Display all available cars" << std::endl;
    std::cout << "7. Display all rented cars" << std::endl;
    std::cout << "8. Display all customers" << std::endl;
    std::cout << "9. Display all rentals" << std::endl;
    std::cout << "10. Exit" << std::endl;
    std::cin >> *choice;
}
