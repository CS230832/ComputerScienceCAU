#include <iostream>

class Vehicle {
   public:
    Vehicle() {}

    Vehicle(float speed, std::string color)
        : m_Speed(speed), m_Color(color) {}

    friend std::ostream &operator<<(std::ostream &fmt, const Vehicle &v) {
        fmt << "Vehicle { speed: " << v.m_Speed << ", color: " << v.m_Color << " }";
        return fmt;
    }

   protected:
    float m_Speed;
    std::string m_Color;
};

class Car : public Vehicle {
   public:
    Car(float speed, std::string color, unsigned int numberOfDoors)
        : m_NumberOfDoors(numberOfDoors) {
        m_Speed = speed;
        m_Color = color;
    }

    friend std::ostream &operator<<(std::ostream &fmt, const Car &car) {
        fmt << "Car { speed: " << car.m_Speed
            << ", color: " << car.m_Color
            << ", number of doors: " << car.m_NumberOfDoors << " }";

        return fmt;
    }

   private:
    unsigned int m_NumberOfDoors;
};

int main() {
    Vehicle smth(45.0, "red");
    Car car(100.0, "blue", 4);

    std::cout << smth << std::endl << car << std::endl;

    return 0;
}