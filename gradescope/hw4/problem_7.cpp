#include <iostream>

void d2array(float *a) {
    for (unsigned int i = 0; i < 5; i++)
        a[i] /= 2.0f;
}

int main() {
    float numbers[5] = {0};

    for (unsigned int i = 0; i < 5; i++)
        std::cin >> numbers[i];
    
    d2array(numbers);

    for (unsigned int i = 0; i < 5; i++)
        std::cout << numbers[i] << " ";

    return 0;
}