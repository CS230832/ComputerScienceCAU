#include <iostream>

bool is_prime(unsigned int a) {
    for (unsigned int i = 2; i <= a / 2; i++)
        if (a % i == 0)
            return false;
    return true;
}

void print_primes(unsigned int a, unsigned int b) {
    for (unsigned int i = a + 1; i <= b; i++)
        if (is_prime(i))
            std::cout << i << " ";
}

int main() {
    unsigned int a = 0;
    unsigned int b = 0;
    std::cin >> a >> b;

    if (a > b) {
        unsigned int temp = a;
        a = b;
        b = temp;
    }

    print_primes(a, b);

    return 0;
}