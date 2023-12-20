#include <iostream>

class Animal {
   public:
    virtual void makeSound() {
        std::cout << "Animal is making sound!" << std::endl;
    }
    virtual ~Animal() {}
};

class Dog : public Animal {
   public:
    void makeSound() {
        std::cout << "Dog is making sound!" << std::endl;
    }
};

class Cat : public Animal {
   public:
    void makeSound() {
        std::cout << "Cat is making sound!" << std::endl;
    }
};

int main() {
    Animal animal{};
    Dog dog{};
    Cat cat{};

    animal.makeSound();
    dog.makeSound();
    cat.makeSound();

    return 0;
}