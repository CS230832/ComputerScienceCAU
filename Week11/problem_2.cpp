#include <iostream>

class Rectangle {
 private:
  int width;
  int height;

 public:
  Rectangle() {}
  Rectangle(int a) : width(a), height(a) {}
  Rectangle(int width, int height) : width(width), height(height) {}

  int area() {
    return width * height;
  }
};

int main() {
  Rectangle square(4);

  std::cout << "Area: " << square.area() << std::endl;

  return 0;
}