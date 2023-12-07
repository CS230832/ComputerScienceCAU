#include <iostream>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    swap(&a, &b);

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}

/*

Problem 1. Write a program that takes two integer pointers as input and swaps the
values they point to. Ensure that the original variables in the calling function
reflect the swapped values


*/