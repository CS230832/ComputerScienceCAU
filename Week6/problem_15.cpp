#include <iostream>
#include "calculator.hpp"

int main() {
    char op = 0;
    float a = 0.0f;
    float b = 0.0f;
    
    while(true) {
        std::cout << "Enter one of the following operations:\n1. '+' to add;\n2. '-' to subract;\n3. '*' to multiply;\n4. '/' to divide.\n5. 'q' to quit.\n";
        std::cin >> op;

        if (op == 'q')
            break;

        std::cout << "Enter number a: ";
        std::cin >> a;
        std::cout << "Enter number b: ";
        std::cin >> b;

        switch (op) {
        case '+':
            add_print(a, b);
            break;
        case '-':
            subtract_print(a, b);
            break;
        case '*':
            multiply_print(a, b);
            break;
        case '/':
            divide_print(a, b);
            break;
        }
    }

    return 0;
}