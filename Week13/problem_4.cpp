#include <iostream>

class Point {
   public:
    Point() {}
    Point(float x, float y) : x(x), y(y) {}

    friend Point operator+(Point p1, Point p2) {
        Point r;
        r.x = p1.x + p2.x;
        r.y = p1.y + p2.y;
        return r;
    }

    friend std::ostream &operator<<(std::ostream &fmt, const Point &p) {
        fmt << "Point { x: " << p.x << ", y: " << p.y << " }";
        return fmt;
    }

   protected:
    float x;
    float y;
};

class ColorPoint : public Point {
   public:
    ColorPoint() {}

    ColorPoint(float x,
               float y,
               unsigned char r,
               unsigned char g,
               unsigned char b,
               unsigned char a) {
        this->x = x;
        this->y = y;
        this->r = r;
        this->g = g;
        this->b = b;
        this->a = a;
    }

    friend ColorPoint operator+(ColorPoint p1, ColorPoint p2) {
        ColorPoint r;
        r.x = p1.x + p2.x;
        r.y = p1.y + p2.y;
        r.r = p1.r + p2.r;
        r.g = p1.g + p2.g;
        r.b = p1.b + p2.b;
        r.a = p1.a + p2.a;
        return r;
    }

    friend std::ostream &operator<<(std::ostream &fmt, const ColorPoint &p) {
        fmt << "ColorPoint { x: " << p.x
            << ", y: " << p.y
            << ", r: " << std::to_string(p.r)
            << ", g: " << std::to_string(p.g)
            << ", b: " << std::to_string(p.b)
            << ", a: " << std::to_string(p.a) << " }";
        return fmt;
    }

   private:
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main() {
    Point p1(34, 43);
    Point p2(12, 0);

    ColorPoint cp1(34, 43, 0, 0, 255, 255);
    ColorPoint cp2(432, 13, 255, 255, 0, 255);

    std::cout << p1 + p2 << std::endl;
    std::cout << cp1 + cp2 << std::endl;

    return 0;
}