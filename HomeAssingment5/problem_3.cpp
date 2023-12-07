#include <iostream>

int strsize(const char *str) {
    int size = -1;
    while (str[++size] != '\0')
        ;
    return size;
}

const char *concat(const char *str1, const char *str2) {
    int size1 = strsize(str1);
    int size2 = strsize(str2);
    int size = size1 + size2 + 1;

    char *result = new char[size];

    for (int i = 0; i < size1; i++)
        result[i] = str1[i];
    for (int i = 0, j = size1; i < size2; i++, j++)
        result[j] = str2[i];

    result[size - 1] = '\0';

    return result;
}

int main() {
    const char *hello = "hello";
    const char *world = "world";

    const char *result = concat(hello, world);

    std::cout << result << std::endl;

    delete[] result;

    return 0;
}

/*

Problem 3.
Write a program that concatenates two C-style strings using pointers. Implement a function that takes
two input strings and dynamically allocates memory to store the concatenated result. The function
should return a pointer to the newly created concatenated string. Make sure to free the dynamically
allocated memory when it's no longer needed.

*/