#include <iostream>

const unsigned int SIZE = 20;

int main() {
    int *array = new int[20];

    for (unsigned int i = 0; i < SIZE; i++) {
        std::cout << "Enter array[" << i << "]: ";
        std::cin >> array[i];
    }

    int *it = array;
    while (it < array + SIZE)
        std::cout << *(it++) << " ";

    std::cout << std::endl;

    delete[] array;

    return 0;
}

/*

Problem 2. Write a program that dynamically allocates an array of integers using the new keyword.
Populate the array with values using a loop. Then, use a pointer to iterate through the array and print its
elements. Don't forget to deallocate the memory using delete at the end.

*/