#include <iostream>
#include <cstdlib>

int main() {
    srand((unsigned) time(nullptr));
    int numbers[3] = {0};

    for (unsigned int i = 0; i < sizeof(numbers) / sizeof(int); i++)
        numbers[i] = rand();
    
    std::cout << "numbers[0] = " << numbers[0] << std::endl;
    
    return 0;
}