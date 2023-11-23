#include <iostream>

class DestructorExample {
   public:
    DestructorExample(int variable = 0) : m_Variable(variable) {}
    DestructorExample(const DestructorExample &other) {
        m_Variable = other.m_Variable;
    }

    ~DestructorExample() {
        std::cout << "Destructing DestructorExample variable with m_Variable " << m_Variable << std::endl;
    }

    void display() {
        std::cout << "Variable: " << m_Variable << std::endl;
    }

   private:
    int m_Variable;
};

int main() {
    DestructorExample one{6};
    DestructorExample other{one};

    one.display();
    other.display();

    return 0;
}