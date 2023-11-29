#include <iostream>

class Counter {
   public:
    Counter() { s_Counter++; }

    static unsigned int getCounter() { return s_Counter; }

   private:
    static inline unsigned int s_Counter = 0;
};

int main() {
    Counter one{};
    Counter two{};
    Counter three{};

    std::cout << "Counter: " << Counter::getCounter() << std::endl;

    Counter four{};
    Counter five{};

    std::cout << "Counter: " << Counter::getCounter() << std::endl;

    return 0;
}