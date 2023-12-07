#include <iostream>
#include <map>

typedef int (*FuncPtr)(int, int);

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
    std::map<char, FuncPtr> funcs;
    funcs['*'] = multiply;
    funcs['+'] = add;

    int a;
    int b;
    char choice;

    std::cout << "Enter number a: ";
    std::cin >> a;
    std::cout << "Enter number b: ";
    std::cin >> b;

    do {
        std::cout << "Enter either '*' or '+' operation: ";
        std::cin >> choice;
    } while (choice != '*' && choice != '+');

    int result = funcs[choice](a, b);

    std::cout << "a " << choice << " b = " << result << std::endl;

    return 0;
}

/*

Problem 4:
Write a program that defines two functions, one that adds two integers and another that multiplies two
integers. Use a function pointer to select which operation to perform based on user input. Take two
integers as input from the user and perform the selected operation using the function pointer

*/