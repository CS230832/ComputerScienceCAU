#include <iostream>
#include "factorial.hpp"

int main() {
    unsigned int num = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Factorial of " << num << " is " << factorial(num) << ".\n";

    return 0;
}