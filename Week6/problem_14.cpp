#include <iostream>

int main() {
    char hello_world[11] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    
    for (char letter : hello_world)
        std::cout << letter;

    std::cout << std::endl;

    return 0;
}