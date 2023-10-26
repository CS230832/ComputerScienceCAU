#include <iostream>

float average() {
    float nominator = 0.0f;
    float denominator = 0.0f;
    float input = 0.0f;
    while (true) {
        std::cin >> input;
        nominator += input;
        if (input == 0.0f)
            break;
        denominator++;
    }

    if (denominator == 0.0f)
        return 0.0f;
    else
        return nominator / denominator;
}

int main() {
    float a = average();
    std::cout << "The average of all numbers is " << a << std::endl;

    return 0;
}