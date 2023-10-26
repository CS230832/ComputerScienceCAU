#include <iostream>

void print_triangle(char letter) {
    for (char i = 65; i <= letter; i++) {
        for (unsigned int j = 0; j < i - 64; j++)
            std::cout << i;
        std::cout << std::endl;
    }
}

int main() {
    char letter = 0;
    std::cin >> letter;

    letter = toupper(letter);

    print_triangle(letter);

    return 0;
}