#include <iostream>
#include <vector>

std::string digit2word(unsigned char digit) {
    switch (digit) {
    case 0:
        return "zero";
    case 1:
        return "one";
    case 2:
        return "two";
    case 3:
        return "three";
    case 4:
        return "four";
    case 5:
        return "five";
    case 6:
        return "six";
    case 7:
        return "seven";
    case 8:
        return "eight";
    case 9:
        return "nine";
    default:
        return "Should never reach here!!!\n";
    }
}

std::string number2word(int num) {
    std::string to_return{};
    std::vector<std::string> digits = {};

    if (num < 0)
        num *= -1;

    while (num > 0) {
        std::string digit = digit2word(num % 10);
        digit.push_back(' ');
        digits.insert(digits.begin(), digit);
        num /= 10;
    }

    for (std::string digit : digits)
        to_return.append(digit);

    return to_return;
}

int main() {
    int num = 0;
    std::cin >> num;
    std::cout << number2word(num);
    return 0;
}