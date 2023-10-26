#include <iostream>
#include "calculator.hpp"

void add_print(float a, float b) {
    std::cout << a << " + " << b << " = " << a + b << ";\n";
}

void subtract_print(float a, float b) {
    std::cout << a << " - " << b << " = " << a - b << ";\n";
}

void multiply_print(float a, float b) {
    std::cout << a << " * " << b << " = " << a * b << ";\n";
}

void divide_print(float a, float b) {
    if (b == 0)
        std::cout << "You can't divide any number by 0!!!\n";
    else
        std::cout << a << " + " << b << " = " << a + b << ";\n";
}
