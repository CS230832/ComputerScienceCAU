#include <iostream>
#include <cmath>
#include <vector>

class Shape {
   public:
    virtual double area() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
   public:
    Circle(double radius) : m_Radius(radius) {}

    void set(double radius) {
        m_Radius = radius;
    }

    double get() const {
        return m_Radius;
    }

    double area() const {
        return M_PI * m_Radius * m_Radius;
    }

   private:
    double m_Radius;
};

class Rectangle : public Shape {
   public:
    Rectangle(double width, double height)
        : m_Width(width), m_Height(height) {}

    void set(double width, double height) {
        m_Width = width;
        m_Height = height;
    }

    double area() const {
        return m_Width * m_Height;
    }

   private:
    double m_Width;
    double m_Height;
};

int main() {
    Circle c1(4);
    Rectangle r1(4, 6);
    Circle c2(6);
    Circle c3(1.2);
    Rectangle r2(5, 10);
    Rectangle r3(45, 1);

    std::vector<Shape *> shapes = {
        &c1,
        &c2,
        &c3,
        &r1,
        &r2,
        &r3,
    };

    for (const Shape *shape : shapes)
        std::cout << shape->area() << std::endl;

    return 0;
}
