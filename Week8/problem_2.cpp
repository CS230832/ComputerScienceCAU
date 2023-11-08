#include <iostream>

void reverseArray(int *, int);

int main() {
    int size;
    std::cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
        std::cin >> array[i];

    reverseArray(array, size);

    for (int number : array)
        std::cout << number << " ";

    std::cout << std::endl;
    return 0;
}

void reverseArray(int *array, int size) {
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        array[i] = array[i] + array[j];
        array[j] = array[i] - array[j];
        array[i] = array[i] - array[j];
    }
}