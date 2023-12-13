#include <iostream>
#include <chrono>

class Instrument {
   public:
    virtual void play() = 0;
    virtual ~Instrument() {}
};

class Guitar : public Instrument {
   public:
    void play() {
        std::cout << "Guitar is playing!" << std::endl;
    }
};

class Piano : public Instrument {
   public:
    void play() {
        std::cout << "Piano is playing!" << std::endl;
    }
};

class Violin : public Instrument {
   public:
    void play() {
        std::cout << "Violin is playing!" << std::endl;
    }
};

int main() {
    Guitar g;
    Piano p;
    Violin v;

    Instrument *insts[3] = {&g, &p, &v};

    for (unsigned int i = 0; i < 3; i++)
        insts[i]->play();

    return 0;
}