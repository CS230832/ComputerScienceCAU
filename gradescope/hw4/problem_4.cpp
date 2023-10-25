#include <iostream>

char uint2ascii(unsigned int i) {
    return i;
}

int main() {
    unsigned int i = 0;
    std::cin >> i;

    if (32 <= i && i <= 126)
        std::cout << uint2ascii(i);
    else
        std::cout << "Wrong";

    return 0;
}