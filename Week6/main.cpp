#include <iostream>

unsigned int Factorial(unsigned int n);

int main() {
    int number = 0;
    std::cout << std::boolalpha << "Enter a number: ";
    std::cin >> number;

    std::cout << "Factorial of number " << number << " is " << Factorial(number) << std::endl;

    return 0;
}

unsigned int Factorial(unsigned int num) {
    if (num <= 1)
        return 1;
    return num * Factorial(num - 1);
}
