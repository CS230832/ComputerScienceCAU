#include <iostream>

class BaseClass {
   public:
    BaseClass(int variable = 0) : m_Variable(variable) {}
    int get() {
        return m_Variable;
    }

    void display() {
        std::cout << "BaseClass m_Variable: " << m_Variable << std::endl;
    }

   protected:
    int m_Variable;
};

class DerivedClass : public BaseClass {
   public:
    DerivedClass(int otherVariable = 5, int variable = 0) : m_OtherVariable(otherVariable) {
        m_Variable = variable;
    }

    void display() {
        std::cout << "DerivedClass m_Variable: " << m_Variable << std::endl;
        std::cout << "DerivedClass m_OtherVariable: " << m_OtherVariable << std::endl;
    }

   private:
    int m_OtherVariable;
};

int main() {
    BaseClass bc{8};
    DerivedClass dc{6, 7};

    bc.display();
    dc.display();

    return 0;
}