#include <cmath>
#include <iostream>

using namespace std;

class Triangle {
  float point_a, point_b, point_c;

 public:
  Triangle(float a, float b, float c) {
    this->point_a = a;
    this->point_b = b;
    this->point_c = c;
  }

  float parameter();
  float area();
};

float Triangle::parameter() { return point_a + point_b + point_c; }
float Triangle::area() {
  float ph = this->parameter() / 2;
  return sqrt(ph * (ph - point_a) * (ph - point_b) * (ph - point_c));
}

int main() {
  cout << "Enter three points for the triangle: ";
  float a, b, c;
  cin >> a >> b >> c;

  Triangle t(a, b, c);

  cout << "Parameter: " << t.parameter() << endl;
  cout << "Area: " << t.area() << endl;

  return 0;
}