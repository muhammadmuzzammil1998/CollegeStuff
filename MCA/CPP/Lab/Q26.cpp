#include <iostream>

using namespace std;

class Complex {
  float n;
  float i;

 public:
  Complex(float n = 0, float i = 0) { set(n, i); }
  void set(float n, float i);
  void print();
  Complex sum(Complex);
};

void Complex::set(float n, float i) {
  this->n = n;
  this->i = i;
}

void Complex::print() { std::cout << n << " + " << i << "i" << endl; }

Complex Complex::sum(Complex x) {
  return Complex(this->n + x.n, this->i + x.i);
}

int main() {
  Complex a, b, c;
  float n, i;

  cout << "Enter a number and its imaginary part: ";
  cin >> n >> i;
  a.set(n, i);

  cout << "Enter another number and its imaginary part: ";
  cin >> n >> i;
  b.set(n, i);

  c = a.sum(b);

  cout << "Complex a = ";
  a.print();

  cout << "Complex b = ";
  b.print();

  cout << "Complex c = ";
  c.print();

  return 0;
}
