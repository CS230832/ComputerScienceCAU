#include <iostream>

class Student {
 private:
  std::string name;
  int grade;
  float gpa;

 public:
  Student(std::string name = "None", int grade = 0, float gpa = 0.0f) : name(name), grade(grade), gpa(gpa) {}

  ~Student() {
    std::cout << "Student with name: " << name << " is getting deconstructed!\n";
  }

  void display() {
    std::cout << "Student:\n\tname: " << name << ";\n\tgrade: " << grade << ";\n\tgpa: " << gpa << ";\n";
  }
};

int main() {
  Student me("Muhammadxon", 15, 4.3);
  Student aziz("Aziz", 12, 4.0);

  aziz.display();
  me.display();

  return 0;
}