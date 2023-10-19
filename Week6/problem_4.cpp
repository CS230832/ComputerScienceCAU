#include <iostream>

bool is_even(int n) {
    return n % 2 == 0;
}

int main() {
    int number = 0;
    std::cout << std::boolalpha << "Enter a number: ";
    std::cin >> number;

    std::cout << (is_even(number)? "Given number is even\n": "Given number is odd\n");

    return 0;
}
