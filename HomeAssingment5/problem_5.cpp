#include <iostream>
#include <map>

int main() {
    std::string original;
    std::getline(std::cin, original);

    int newSize = original.size() + 1;

    char *newStr = new char[newSize];

    for (int i = 0; i < newSize - 1; i++)
        newStr[i] = original[i];

    newStr[newSize - 1] = '\0';

    char *start = newStr;
    char *end = newStr + newSize - 2;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    std::cout << "Original: " << original << std::endl;
    std::cout << "Reversed: " << newStr << std::endl;

    delete[] newStr;
    return 0;
}

/*

Problem 5:
Create a program that takes a user input string, dynamically allocates memory for it, and then reverses
the string using pointers. Print both the original and reversed strings.

*/