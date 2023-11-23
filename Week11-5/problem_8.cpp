#include <iostream>

class ComplexClass {
   public:
    ComplexClass(int variable1, int variable2, int variable3 = 3)
        : m_Variable1(variable1), m_Variable2(variable2), m_Variable3(variable3) {}
    void display() {
        std::cout << "Variable1: " << m_Variable1 << std::endl;
        std::cout << "Variable2: " << m_Variable2 << std::endl;
        std::cout << "Variable3: " << m_Variable3 << std::endl;
    }

   private:
    int m_Variable1;
    int m_Variable2;
    int m_Variable3;
};

int main() {
    ComplexClass smth{5, 8};
    smth.display();
    return 0;
}