#include <iostream>

class Base {
   public:
    virtual void display() {
        std::cout << "Base Class!" << std::endl;
    }
    virtual ~Base() {}
};

class Derived1 : public Base {
   public:
    void display() {
        std::cout << "Derived1 Class!" << std::endl;
    }
};

class Derived2 : public Base {
   public:
    void display() {
        std::cout << "Derived2 Class!" << std::endl;
    }
};

int main() {
    Base base{};
    Derived1 d1{};
    Derived2 d2{};

    base.display();
    d1.display();
    d2.display();

    return 0;
}