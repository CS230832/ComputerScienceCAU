#include <iostream>

class StaticMemeberClass {
   public:
    StaticMemeberClass(int variable = -10) : m_Variable(variable) {
        s_Number++;
    }

    static int getNumber() {
        return s_Number;
    }

    void display() {
        std::cout << "StaticMemberClass m_Variable: " << m_Variable << std::endl;
    }

   private:
    int m_Variable;

    static inline int s_Number = 0;
};

int main() {
    StaticMemeberClass smth{};
    std::cout << "s_Number: " << StaticMemeberClass::getNumber() << std::endl;
    StaticMemeberClass other{5};
    std::cout << "s_Number: " << StaticMemeberClass::getNumber() << std::endl;

    smth.display();
    other.display();

    return 0;
}