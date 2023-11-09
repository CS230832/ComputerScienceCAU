#include <iostream>

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

typedef int (*funcPtr) (int, int);

int main() {
    funcPtr functions[] = {add, subtract, multiply, divide};

    for (funcPtr func : functions)
        std::cout << func(6, 5) << std::endl;

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0)
        return 0;
    return a / b;
}
