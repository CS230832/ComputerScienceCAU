#include <iostream>
#include <cstdlib>

int main() {
    srand((unsigned) time(nullptr));
    float numbers[4] = {0};

    for (unsigned int i = 0; i < sizeof(numbers) / sizeof(float); i++)
        numbers[i] = rand();
    
    std::cout << "numbers[3] = " << numbers[3] << std::endl;
    
    return 0;
}