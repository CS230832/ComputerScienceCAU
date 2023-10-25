#include <iostream>
#include <iomanip>

float divide(float n, float d) {
    return n / d;
}

int main() {
    float a = 0.0f;
    float b = 0.0f;
    std::cin >> a >> b;

    std::cout << std::setprecision(3) << divide(a, b);

    return 0;
}