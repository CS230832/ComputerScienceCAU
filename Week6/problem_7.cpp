#include <iostream>

void printMaxMin(int, int, int);

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    std::cout << "Enter number a: ";
    std::cin >> a;
    std::cout << "Enter number b: ";
    std::cin >> b;
    std::cout << "Enter number c: ";
    std::cin >> c;

    printMaxMin(a, b, c);

    return 0;
}

void printMaxMin(int a, int b, int c) {
    int max = a >= b && a >= c? a:b >= a && b >= c? b:c;
    int min = a <= b && a <= c? a:b <= a && b <= c? b:c;
    std::cout << "Maximum: " << max << "\nMinimum: " << min << std::endl;
}
