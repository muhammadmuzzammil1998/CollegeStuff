#include <iostream>

using namespace std;

class Complex {
  float n;
  float i;

 public:
  Complex(float n = 0, float i = 0) { set(n, i); }
  void set(float n, float i);

  friend ostream& operator<<(ostream&, Complex&);

  void operator++() {
    n++;
    i++;
  }
  void operator--() {
    n--;
    i--;
  }

  Complex operator+(Complex x) {
    n += x.n;
    i += x.i;
    return Complex(n, i);
  }

  Complex operator-(Complex x) {
    n -= x.n;
    i -= x.i;
    return Complex(n, i);
  }
};

ostream& operator<<(ostream& o, Complex& c) {
  return (o << c.n << " + " << c.i << "i");
}

void Complex::set(float n, float i) {
  this->n = n;
  this->i = i;
}

int main() {
  Complex a, b, c;
  float n, i;

  cout << "Enter a number and its imaginary part (a): ";
  cin >> n >> i;
  a.set(n, i);

  cout << "Enter a number and its imaginary part (b): ";
  cin >> n >> i;
  b.set(n, i);

  ++a;
  --b;
  cout << "Incrementing a: " << a << endl;
  cout << "Decrementing b: " << b << endl;

  c = a + b;
  cout << "  a + b = " << c << endl;

  c = a - b;
  cout << "  a - b = " << c << endl;

  return 0;
}