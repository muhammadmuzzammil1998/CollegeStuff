#include <iostream>

using namespace std;

class Shape;

class Box {
  double width;

 public:
  friend Shape;
  void set(double);
};

class Shape {
  double width;

 public:
  void print(Box);
};

void Box::set(double wid) { width = wid; }
void Shape::print(Box b) { cout << "Box width: " << b.width; }

int main() {
  Box box;
  Shape shape;

  box.set(50);
  shape.print(box);

  return 0;
}