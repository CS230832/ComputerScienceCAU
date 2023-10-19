#include <iostream>

bool is_prime(unsigned int);

int main() {
    int number = 0;
    std::cout << std::boolalpha << "Enter a number: ";
    std::cin >> number;

    std::cout << "Given number is " << (is_prime(number)? "": "not ") << "prime\n";

    return 0;
}

bool is_prime(unsigned int num) {
    for (unsigned int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;

    return true;
}
