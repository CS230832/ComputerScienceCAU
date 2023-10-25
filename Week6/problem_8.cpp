#include <iostream>

float add(float, float);
float subtract(float, float);
float product(float, float);
float division(float, float);

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
            std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
            break;
        case '-':
            std::cout << a << " - " << b << " = " << subtract(a, b) << std::endl;
            break;
        case '*':
            std::cout << a << " * " << b << " = " << product(a, b) << std::endl;
            break;
        case '/':
            std::cout << a << " / " << b << " = " << division(a, b) << std::endl;
            break;
        }
    }

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float product(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return b != 0? a / b:0.0f;
}