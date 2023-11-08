#include <iostream>

void minmax(int *, int, int *, int *);

int main() {
    int size;
    std::cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
        std::cin >> array[i];

    int min, max;

    minmax(array, size, &min, &max);

    std::cout << min << " " << max << std::endl;

    return 0;
}

void minmax(int *array, int size, int *min, int *max) {
    if (size > 0) {
        *min = array[0];
        *max = array[0];
    }

    for (int i = 0; i < size; i++)
        if (array[i] > *max)
            *max = array[i];
        else if (array[i] < *min)
            *min = array[i];
}