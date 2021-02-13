#include <iostream>

using namespace std;

class Shape;

class Box {
  double width;

 public:
  friend void add(Shape, Box);
  void set(double);
};

class Shape {
  double width;

 public:
  friend void add(Shape, Box);
  void set(double);
};

void Box::set(double wid) { width = wid; }
void Shape::set(double wid) { width = wid; }

void add(Shape s, Box b) {
  cout << "Box (" << b.width << ") + Shape (" << s.width
       << ") = " << s.width + b.width << endl;
}

int main() {
  Box box;
  Shape shape;

  box.set(50);
  shape.set(50);

  add(shape, box);

  return 0;
}