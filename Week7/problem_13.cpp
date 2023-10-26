#include <iostream>

float power(float num, unsigned int pow) {
    if (pow == 0)
        return 0;
    else if (pow == 1)
        return num;
    else
        return num * power(num, pow - 1);
}

int main() {
    float num = 0.0f;
    unsigned int pow = 0;
    std::cin >> num >> pow;

    std::cout << "The number " << num << " in the power of " << pow << " is equal to " << power(num, pow) << std::endl;

    return 0;
}