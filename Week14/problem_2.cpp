#include <iostream>
#include <vector>

class Person {
   public:
    Person() {}
    Person(std::string name, unsigned int age)
        : m_Name(name), m_Age(age) {}

    virtual void display() const = 0;

    friend std::ostream &operator<<(std::ostream &fmt, const Person &p) {
        fmt << "Person { name: " << p.m_Name << ", age: " << p.m_Age << " }";
        return fmt;
    }

   protected:
    std::string m_Name;
    unsigned int m_Age;
};

class Teacher : public Person {
   public:
    Teacher(std::string name, unsigned int age, double salary)
        : m_Salary(salary) {
        m_Name = name;
        m_Age = age;
    }

    friend std::ostream &operator<<(std::ostream &fmt, const Teacher &t) {
        fmt << "Teacher { name: " << t.m_Name
            << ", age: " << t.m_Age
            << ", salary: $" << t.m_Salary << " }";
        return fmt;
    }

    void display() const {
        std::cout << "Teacher { name: " << m_Name
                  << ", age: " << m_Age
                  << ", salary: $" << m_Salary << " }" << std::endl;
    }

   private:
    double m_Salary;
};

class Student : public Person {
   public:
    Student(std::string name, unsigned int age, double grade)
        : m_Grade(grade) {
        m_Name = name;
        m_Age = age;
    }

    friend std::ostream &operator<<(std::ostream &fmt, const Student &s) {
        fmt << "Student { name: " << s.m_Name
            << ", age: " << s.m_Age
            << ", grade: " << s.m_Grade << " }";
        return fmt;
    }

    void display() const {
        std::cout << "Student { name: " << m_Name
                  << ", age: " << m_Age
                  << ", grade: " << m_Grade << " }" << std::endl;
    }

   private:
    double m_Grade;
};

int main() {
    std::vector<Person *> people{};

    unsigned char choice;

    std::string name;
    unsigned int age;

    while (true) {
        std::cout << "Enter:" << std::endl;
        std::cout << "t - to enter a teacher: " << std::endl;
        std::cout << "s - to enter a student: " << std::endl;
        std::cout << "e - to exit" << std::endl;
        std::cin >> choice;

        if (choice == 'e') break;

        std::cin.ignore();
        std::cout << "Enter name of the person: ";
        std::getline(std::cin, name);
        std::cout << "Enter age of the person: ";
        std::cin >> age;

        if (choice == 't') {
            double salary;
            std::cout << "Enter salary of the teacher: ";
            std::cin >> salary;
            people.push_back(new Teacher(name, age, salary));
        } else if (choice == 's') {
            double grade;
            std::cout << "Enter grade of the student: ";
            std::cin >> grade;
            people.push_back(new Student(name, age, grade));
        }
    }

    for (const Person *person : people) {
        person->display();
    }

    return 0;
}
