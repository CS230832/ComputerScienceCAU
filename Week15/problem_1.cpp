#include <iostream>

class Person {
   public:
    Person(std::string name, int age, float height)
        : m_Name(name), m_Age(age), m_Height(height) {}
    ~Person() {
        std::cout << "Person: { name: " << m_Name
                  << ", age: " << m_Age
                  << ", height: " << m_Height
                  << "m } is being destroyed!!!" << std::endl;
    }

    void set(std::string name) { m_Name = name; }
    void set(int age) { m_Age = age; }
    void set(float height) { m_Height = height; }

    void setName(std::string name) { set(name); }
    void setAge(int age) { set(age); }
    void setHeight(float height) { set(height); }

    void display() {
        std::cout << "Person: { name: " << m_Name
                  << ", age: " << m_Age
                  << ", height: " << m_Height << "m }" << std::endl;
    }

    float getBmi(float weight) {
        return weight / (m_Height * m_Height);
    }

   private:
    std::string m_Name;
    int m_Age;
    float m_Height;
};

int main() {
    Person avaz("Avaz", 20, 1.75);

    avaz.display();

    std::cout << "Avaz's bmi: " << avaz.getBmi(50) << std::endl;

    return 0;
}