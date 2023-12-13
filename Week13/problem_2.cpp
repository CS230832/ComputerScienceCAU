#include <iostream>

class Shape {
   public:
    virtual float calculateArea() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
   public:
    Rectangle() {}

    Rectangle(float width, float height)
        : m_Width(width), m_Height(height) {}

    float calculateArea() const {
        return m_Width * m_Height;
    }

   protected:
    float m_Width;
    float m_Height;
};

class Cuboid : public Rectangle {
   public:
    Cuboid(float sideLength) {
        m_Width = sideLength;
    }

    float calculateArea() const {
        return m_Width * m_Width;
    }
};

int main() {
    Rectangle quad(45, 54);
    Cuboid square(60);

    std::cout << "Area of quad: " << quad.calculateArea() << std::endl
              << "Area of square: " << square.calculateArea() << std::endl;

    return 0;
}