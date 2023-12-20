#include <iostream>
#include <vector>
#include <cmath>

class Shape {
   public:
    virtual void draw() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
   public:
    Circle(float radius) : m_Radius{radius} {}

    void draw() const {
        std::cout << "Drawing cirlce with Area: " << m_Radius * m_Radius * M_PI << std::endl;
    }

   private:
    float m_Radius;
};

class Square : public Shape {
   public:
    Square(float side) : m_Side{side} {}

    void draw() const {
        std::cout << "Drawing square with Area: " << m_Side * m_Side << std::endl;
    }

   private:
    float m_Side;
};

int main() {
    std::vector<Shape *> shapes{};

    Circle c1{1.0f};
    Circle c2{2.0f};
    Circle c3{3.0f};
    Circle c4{4.0f};
    Circle c5{5.0f};
    Square s1{1.0f};
    Square s2{2.0f};
    Square s3{3.0f};
    Square s4{4.0f};
    Square s5{5.0f};

    shapes.push_back(&c1);
    shapes.push_back(&c2);
    shapes.push_back(&c3);
    shapes.push_back(&c4);
    shapes.push_back(&c5);
    shapes.push_back(&s1);
    shapes.push_back(&s2);
    shapes.push_back(&s3);
    shapes.push_back(&s4);
    shapes.push_back(&s5);

    for (const Shape *shape : shapes)
        shape->draw();

    return 0;
}