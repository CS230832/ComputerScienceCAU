#include <iostream>

int product(int *a) {
    int to_return = a[0];
    for (unsigned int i = 1; i < 5; i++)
        to_return *= a[i];
    
    return to_return;
}

int main() {
    int numbers[5] = {0};

    for (unsigned int i = 0; i < 5; i++)
        std::cin >> numbers[i];
    
    std::cout << product(numbers);

    return 0;
}