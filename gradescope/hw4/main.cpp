#include <iostream>

void p3array(int *a) {
    for (unsigned int i = 1; i < 6; i += 2)
        a[i] *= a[i] * a[i];
}

int main() {
    int numbers[6] = {0};

    for (unsigned int i = 0; i < 6; i++)
        std::cin >> numbers[i];
    
    p3array(numbers);

    for (unsigned int i = 0; i < 6; i++)
        std::cout << numbers[i] << " ";

    return 0;
}