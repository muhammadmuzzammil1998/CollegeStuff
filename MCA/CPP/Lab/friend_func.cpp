#include <iostream>

using namespace std;

class Box {
  double width;

 public:
  friend void print(Box);
  friend string compare(Box, Box);
  void set(double);
};

void Box::set(double wid) { width = wid; }
void print(Box box) { cout << "Width of box: " << box.width << endl; }
string compare(Box b1, Box b2) { return b1.width > b2.width ? "Box1" : "Box2"; }

int main() {
  Box box1, box2;

  box1.set(10.0);
  box2.set(15.0);

  print(box1);
  print(box2);

  cout << compare(box1, box2) << " is bigger" << endl;

  return 0;
}