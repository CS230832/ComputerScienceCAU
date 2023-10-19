#include <iostream>

void print_sum(float, float);

int main() {
    float a = 0.0f;
    float b = 0.0f;
    std::cout << "Enter number a: ";
    std::cin >> a;
    std::cout << "Enter number b: ";
    std::cin >> b;
    
    print_sum(a, b);

    return 0;
}

void print_sum(float a, float b) {

    std::cout << a << " + " << b << " = " << a + b << std::endl;
}