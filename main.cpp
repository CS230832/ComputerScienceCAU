#include <iostream>

const char *ENTER_MARKS = "Enter marks and credit ours for";

int main() {
    float width;
    float height;

    std::cout << "Enter width of a rectangle: ";
    std::cin >> width;
    std::cout << "Enter height of a rectangle: ";
    std::cin >> height;

    std::cout << std::endl << "Perimeter of rectangle is  " << 2.0 * (width + height) << ";\nArea of rectangle is " << width * height << ";\n\n\n";

    bool zero = false;
    bool one = true;

    std::cout << std::boolalpha << "0 = " << zero << "\n1 = " << one << std::endl;

    int problem6;
    std::cout << "Enter an integer for Problem 6: ";
    std::cin >> problem6;
    int temp = problem6;
    problem6 *= 3;
    std::cout << "Problem 6: " << temp << " x 3 = " << problem6 << ";\n";

    int problem7 = 106;
    problem7 /= 5;
    std::cout << "Problem 7: " << problem7 << "\n";

    double _25e3 = 25e3;
    float _15e4 = 15e4;
    std::cout << "(double)25e3 = " << _25e3 << "\n(float)15e4 = " << _15e4 << std::endl;

    float a;
    float b;
    std::cout << "Problem 8:\nEnter number a: ";
    std::cin >> a;
    std::cout << "Enter number b: ";
    std::cin >> b;

    if (a == b)
        std::cout << "a == b\n";
    else
        std::cout << "a != b\n";

    std::cout << "Problem 10 && 11:\nIs a less than 50: " << (a < 50.0f) << ";\nIs a less than b: " << (a < b);

    float mid_term_grade = 74.5f;
    std::cout << "Problem 12:\n " << mid_term_grade * 0.3f;
    std::cout << "Problem 13:\n";
    float marks_itCS;
    float credit_hours_itCS;
    std::cout << ENTER_MARKS << " itCS: ";
    std::cin >> marks_itCS >> credit_hours_itCS;
    float marks_MATFL;
    float credit_hours_MATFL;
    std::cout << ENTER_MARKS << " MATFL: ";
    std::cin >> marks_MATFL >> credit_hours_MATFL;
    float marks_CP_lec;
    float credit_hours_CP_lec;
    std::cout << ENTER_MARKS << " CP_lec: ";
    std::cin >> marks_CP_lec >> credit_hours_CP_lec;
    float marks_AE1;
    float credit_hours_AE1;
    std::cout << ENTER_MARKS << " AE1: ";
    std::cin >> marks_AE1 >> credit_hours_AE1;
    float marks_ICT_lec;
    float credit_hours_ICT_lec;
    std::cout << ENTER_MARKS << " ICT_lec: ";
    std::cin >> marks_ICT_lec >> credit_hours_ICT_lec;
    float marks_MATFT;
    float credit_hours_MATFT;
    std::cout << ENTER_MARKS << " MATFT: ";
    std::cin >> marks_MATFT >> credit_hours_MATFT;
    float marks_CP_lab;
    float credit_hours_CP_lab;
    std::cout << ENTER_MARKS << " CP_lab: ";
    std::cin >> marks_CP_lab >> credit_hours_CP_lab;

    float gpa = (
            marks_itCS    * credit_hours_itCS    + 
            marks_MATFL   * credit_hours_MATFL   + 
            marks_CP_lec  * credit_hours_CP_lec  + 
            marks_AE1     * credit_hours_AE1     + 
            marks_ICT_lec * credit_hours_ICT_lec + 
            marks_MATFT   * credit_hours_MATFT   + 
            marks_CP_lab  * credit_hours_CP_lab
        ) / (
            credit_hours_itCS    + 
            credit_hours_MATFL   + 
            credit_hours_CP_lec  + 
            credit_hours_AE1     + 
            credit_hours_ICT_lec + 
            credit_hours_MATFT   + 
            credit_hours_CP_lab
        );
    std::cout << "Your current gpa is: " << gpa << std::endl;

    return 0;
}