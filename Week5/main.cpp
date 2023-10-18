#include <iostream>
#include <string>

int main() {
    std::cout << "Problem 1:\n";
    for (unsigned int i = 0; i < 10; i++)
        std::cout << i + 1 << " ";
    std::cout << std::endl;

    std::cout << "Problem 2:\n";
    unsigned int sum = 0;
    for (unsigned int i = 0; i < 10; i++, sum += i)
        std::cout << i + 1 << " ";
    std::cout << "\nsum: " << sum << std::endl;

    std::cout << "Problem 3:\n";
    for (unsigned int i = 0; i < 100; i++)
        if ((i + 1) % 5 != 0)
            std::cout << i + 1 << " ";
    std::cout << std::endl;

    std::cout << "Problem 4:\n";
    unsigned int prime = 0;
    std::string is_prime = "";
    std::cin >> prime;
    for (unsigned int i = 2; i <= prime / 2; i++)
        if (prime % i == 0) {
            is_prime = "not ";
            break;
        }
    std::cout << "Number is " << is_prime << "prime\n";

    std::cout << "Problem 5:\n";
    unsigned int n = 0;
    sum = 0;
    std::cin >> n;
    for (unsigned int i = 0; i < n; i++, sum += i * i)
        std::cout << i + 1 << "*" << i + 1 << "=" << (i + 1) * (i + 1) << std::endl;
    std::cout << "The sum is: " << sum << std::endl;

    std::cout << "Problem 6:\n";
    int input = 0;
    int max = 0;
    do {
        std::cin >> input;
        if (input > max)
            max = input;
    } while(input != 0);
    std::cout << "Max is " << max << std::endl;

    std::cout << "Problem 7:\n";
    float x = 0.0;
    float y = 0.0;
    char op = ' ';
    while (true) {
        while (op != 'q' && op != '+' && op != '-' && op != '*' & op != '/') {
            std::cout << "Operations: (+, -, /, *) and to quit type 'q'\nNow enter operation: ";
            std::cin >> op;
        }
        if (op == 'q')
            break;
        std::cout << "Now enter x: ";
        std::cin >> x;
        std::cout << "Now enter y: ";
        std::cin >> y;
        if (op == '/' && y == 0.0)
            while (y == 0.0) {
                std::cout << "You cannot divide numbers by 0, thus re-enter y: ";
                std::cin >> y;
            }

        switch (op) {
        case '+':
            std::cout << x << " + " << y << " = " << x + y << std::endl;
            break;
        case '-':
            std::cout << x << " - " << y << " = " << x - y << std::endl;
            break;
        case '*':
            std::cout << x << " * " << y << " = " << x * y << std::endl;
            break;
        case '/':
            std::cout << x << " / " << y << " = " << x / y << std::endl;
            break;
        }

        op = '\0';
    };

    std::cout << "Problem 8:\n";
    unsigned int stars = 0;
    std::cin >> stars;
    for (unsigned int i = 0; i < stars; i++) {
        for (unsigned int j = 0; j < stars; j++)
            std::cout << "* ";
        std::cout << std::endl;
    }

    std::cout << "Problem 9:\n";
    unsigned int triangle = 0;
    std::cin >> triangle;
    std::string stars_line = "*";
    for (unsigned int i = 0; i < triangle; i++) {
        std::cout << stars_line << std::endl;;
        stars_line += "*";
    }

    std::cout << "Problem 10:\n";
    unsigned int sum_digits = 0;
    sum = 0;
    std::cin >> sum_digits;
    while (sum_digits > 0) {
        sum += sum_digits % 10;
        sum_digits /= 10;
    }
    std::cout << "The sum of digits is " << sum << std::endl;

    std::cout << "Problem 11:\n";
    float nominator = 0.0;
    float denominator = 0.0;
    while (true) {
        float credit;
        float mark;
        std::cin >> credit >> mark;
        nominator += mark * credit;
        denominator += credit;
        
        char resume = 'y';
        std::cout << "Do you want to enter more subjects? [y/n]: ";
        std::cin >> resume;

        if (resume == 'n')
            break;
    }
    if (denominator != 0)
        std::cout << "Your total GPA is " << nominator / denominator << std::endl;
    std::cout << "Problem 12:\n";
    triangle = 0;
    std::cin >> triangle;
    if (triangle == 0)
        std::cout << "The depth is 0\n";
    else for (unsigned int i = 0; i < triangle; i++) {
        for (unsigned int j = 0; j < i + 1; j++)
            std::cout << i + 1;
        std::cout << std::endl;
    }

    return 0;
}