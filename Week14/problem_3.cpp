#include <iostream>
#include <vector>

class Person {
   public:
    Person() {}
    Person(std::string name, unsigned int age)
        : m_Name(name), m_Age(age) {}

    virtual void display() const {
        std::cout << "Person { name: " << m_Name << ", age: " << m_Age << " }" << std::endl;
    };

   protected:
    std::string m_Name;
    unsigned int m_Age;
};

class Teacher : public Person {
   public:
    Teacher() {}

    Teacher(std::string name, unsigned int age, double salary)
        : m_Salary(salary) {
        m_Name = name;
        m_Age = age;
    }

    void display() const {
        std::cout << "Teacher { name: " << m_Name
                  << ", age: " << m_Age
                  << ", salary: $" << m_Salary << " }" << std::endl;
    }

   protected:
    double m_Salary;
};

class Student : public Person {
   public:
    Student(std::string name, unsigned int age, double grade)
        : m_Grade(grade) {
        m_Name = name;
        m_Age = age;
    }

    void display() const {
        std::cout << "Student { name: " << m_Name
                  << ", age: " << m_Age
                  << ", grade: " << m_Grade << " }" << std::endl;
    }

   private:
    double m_Grade;
};

class Researcher : public Teacher {
   public:
    Researcher(std::string name, unsigned int age, double salary, std::string field)
        : m_Field(field) {
        m_Name = name;
        m_Age = age;
        m_Salary = salary;
    }

    void display() const {
        std::cout << "Researcher { name: " << m_Name
                  << ", age: " << m_Age
                  << ", salary: $" << m_Salary
                  << ", field: " << m_Field << " }" << std::endl;
    }

   private:
    std::string m_Field;
};

int main() {
    std::vector<Person *> people{};

    unsigned char choice;

    std::string name;
    unsigned int age;

    while (true) {
        std::cout << "Enter:" << std::endl;
        std::cout << "r - to enter a teacher;" << std::endl;
        std::cout << "t - to enter a teacher;" << std::endl;
        std::cout << "s - to enter a student;" << std::endl;
        std::cout << "d - to display all people;" << std::endl;
        std::cout << "e - to exit" << std::endl;
        std::cin >> choice;

        if (choice == 'e') break;

        if (choice == 'd') {
            for (const Person *person : people) {
                person->display();
            }
            continue;
        }

        std::cin.ignore();
        std::cout << "Enter name of the person: ";
        std::getline(std::cin, name);
        std::cout << "Enter age of the person: ";
        std::cin >> age;

        if (choice == 'r') {
            double salary;
            std::string field;
            std::cout << "Enter salary of the researcher: ";
            std::cin >> salary;
            std::cout << "Enter field of the researcher: ";
            std::cin.ignore();
            std::getline(std::cin, field);
            people.push_back(new Researcher(name, age, salary, field));
        } else if (choice == 't') {
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

    return 0;
}
