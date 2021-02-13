#include <iostream>

using namespace std;

class Rectangle {
  double length, breadth;

 public:
  Rectangle() {
    length = 0;
    breadth = 0;
  }
  Rectangle(double length, double breadth) {
    this->length = length;
    this->breadth = breadth;
  }
  Rectangle(double side) { length = breadth = side; }

  double getArea() { return length * breadth; }
};

int main() {
  Rectangle r1, r2(30.2), r3(30.2, 40.5);
  cout << "Default:\t" << r1.getArea() << endl;
  cout << "1 Parameter:\t" << r2.getArea() << endl;
  cout << "2 Parameters:\t" << r3.getArea() << endl;

  return 0;
}