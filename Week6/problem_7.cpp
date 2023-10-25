#include <iostream>
#include <sstream>

std::string getMaxMin(int, int, int);

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

    std::cout << getMaxMin(a, b, c) << std::endl;

    return 0;
}

std::string getMaxMin(int a, int b, int c) {
    int max = a >= b && a >= c? a:b >= a && b >= c? b:c;
    int min = a <= b && a <= c? a:b <= a && b <= c? b:c;
    std::stringstream toReturn{};
    toReturn << "Maximum: " << max << "\nMinimum: " << min;
    return toReturn.str();
}
