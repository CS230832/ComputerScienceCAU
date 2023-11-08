#include <iostream>

int strLength(const char*);

int main() {

    std::cout << strLength("Hello") << std::endl;

    return 0;
}

int strLength(const char *str) {
    int length = 0;
    while (str[length] != '\0')
        length++;

    return length;
}