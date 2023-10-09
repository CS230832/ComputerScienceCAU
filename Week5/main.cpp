#include <iostream>
#include <cmath>
#include <string>
#include <set>

int main() {
    std::cout << "Problem 1:\n";
    int number = 0;
    std::cin >> number;
    std::cout << (number >= 0? number == 0? "zero" : "positive" : "Negative") << std::endl;

    std::cout << "Problem 2:\n";
    std::cin >> number;
    std::cout << "The number is " << (number >= 0? number == 0? "zero" : "positive" : "negative") 
              << " and " << (number % 2 == 0? "even" : "odd") << std::endl;

    std::cout << "Problem 3:\n";
    int x;
    int y;
    int z;
    std::cin >> x >> y >> z;
    int largest;
    if (x >= y && x >= z)
        largest = x;
    else if (y >= x && y >= z)
        largest = y;
    else
        largest = z;
    std::cout << largest << " is the largest\n";

    std::cout << "Problem 4:\n";
    unsigned int year;
    std::cin >> year;
    std::cout << year << " is" << (year % 4 == 0? year % 100 == 0 && year % 400 != 0? " not" : "" : " not") 
              << " a leap year\n";

    std::cout << "Problem 5:\n";
    float a;
    float b;
    float c;
    std::cin >> a >> b >> c;
    float dis = b * b - 4.0 * a * c;
    if (dis > 0) {
        float x1 = (-b + sqrtf(dis)) / (2.0 * a);
        float x2 = (-b - sqrtf(dis)) / (2.0 * a);
        std::cout << "x1=" << x1 << " x2=" << x2 << std::endl;
    } else if (dis == 0) {
        float x = -b / (2.0 * a);
        std::cout << "x1=x2=" << x << std::endl;
    } else {
        std::cout << "This kind of quadratic equation has no roots!";
    }

    std::cout << "Problem 6:\n";
    float angle_a;
    float angle_b;
    float angle_c;
    std::cin >> angle_a >> angle_b >> angle_c;
    std::cout << "The triangle is" << (angle_a + angle_b + angle_c == 180.0? "" : " not") << " valid\n";

    std::cout << "Problem 7:\n";
    char character;
    std::cin >> character;
    std::cout << ('A' <= character && character <= 'Z'? "Uppercase" : 'a' <= character && character <= 'z'? "Lowercase" : "In is not an") << " alphabet\n"; 

    std::cout << "Problem 8:\n";
    std::set<std::string> people_with_access = {"Johnson", "Smith", "Anderson", "Bennett", "Jackson"};
    std::string name;
    std::cin >> name;
    std::cout << "You" << (people_with_access.contains(name)? "" : " do not") << " have access\n";

    return 0;
}