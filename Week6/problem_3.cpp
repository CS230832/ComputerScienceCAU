#include <iostream>
#include <cmath>

void print_circle(float);

int main() {
    float radius = 0.0f;
    std::cout << "Enter number radius of circle: ";
    std::cin >> radius;
    
    print_circle(radius);

    return 0;
}

void print_circle(float r) {
    std::cout << "Circumference of circle with radius " << r << " is " << 2 * M_PI * r << " and area is " << r * r * M_PI << std::endl;
}