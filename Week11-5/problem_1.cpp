#include <iostream>

class SimpleClass {
   public:
    SimpleClass(int variable = 0) : m_Variable(variable) {}
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