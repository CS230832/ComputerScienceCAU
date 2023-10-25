#include <iostream>

bool is_right_triangle(float a, float b, float c) {
    return a*a + b*b == c*c || c*c + b*b == a*a || a*a + c*c == b*b;
}

int main() {
    float a = 0.0f;
    float b = 0.0f;
    float c = 0.0f;
    std::cin >> a >> b >> c;

    std::cout << (is_right_triangle(a, b, c)? "Yes": "No");

    return 0;
}