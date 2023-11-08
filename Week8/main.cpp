#include <iostream>

void concat(char *, int, char *, int);

int main() {
    char *hello = "Hello";
    char *world = " World";

    concat(hello, 5, world, 6);

    std::cout << hello << std::endl;

    return 0;
}

void concat(char *dist, int distSize, char *src, int srcSize) {
    char str[distSize + srcSize + 1];
    for (int i = 0; i < distSize; i++)
        str[i] = dist[i];
    for (int i = 0; i <= srcSize; i++)
        str[i + distSize] = src[i];
    delete src;
    dist = str;
}