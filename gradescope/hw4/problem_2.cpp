#include <iostream>
#include <iomanip>

float km2m(float km) {
    return km * 1000;
}

int main() {
    float km = 0.0f;
    std::cin >> km;

    std::cout << km2m(km);

    return 0;
}