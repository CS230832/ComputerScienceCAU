#include <iostream>
#include <cstdlib>

int main() {
    srand((unsigned) time(nullptr));
    double numbers[7] = {0};

    for (unsigned int i = 0; i < sizeof(numbers) / sizeof(double); i++)
        numbers[i] = rand();
    
    std::cout << "numbers[4] = " << numbers[4] << std::endl;
    
    return 0;
}