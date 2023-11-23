#include <iostream>

class SimpleClass {
   public:
    SimpleClass() : m_Variable(0) {}
    SimpleClass(int variable) : m_Variable(variable) {}
    void display() {
        std::cout << "Variable: " << m_Variable << std::endl;
    }

   private:
    int m_Variable;
};

int main() {
    SimpleClass smth{5};
    smth.display();
    return 0;
}