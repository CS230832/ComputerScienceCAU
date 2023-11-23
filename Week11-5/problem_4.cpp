#include <iostream>

class CopyExample {
   public:
    CopyExample(int variable = 0) : m_Variable(variable) {}
    CopyExample(const CopyExample &other) {
        m_Variable = other.m_Variable;
    }
    void display() {
        std::cout << "Variable: " << m_Variable << std::endl;
    }

   private:
    int m_Variable;
};

int main() {
    CopyExample one{6};
    CopyExample other{one};

    one.display();
    other.display();

    return 0;
}