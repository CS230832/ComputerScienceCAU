#include <iostream>

float sum(float, float);

int main() {
    float a = 0.0f;
    float b = 0.0f;
    std::cout << "Enter number a: ";
    std::cin >> a;
    std::cout << "Enter number b: ";
    std::cin >> b;
    
    std::cout << a << " + " << b << " = " << sum(a, b) << std::endl;

    return 0;
}

float sum(float a, float b) {
    return a + b;
}