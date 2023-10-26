#include <iostream>
#include <cstdlib>

int main() {
    srand((unsigned) time(nullptr));

    for (unsigned int i = 0; i < 10; i++)
        std::cout << rand() << " ";
    
    return 0;
}