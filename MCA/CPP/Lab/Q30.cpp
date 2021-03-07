#include <iostream>

#define NL << endl

using namespace std;

class FLOAT {
  float f;

 public:
  FLOAT(float x) : f(x) {}
  FLOAT() : f(0) {}

  FLOAT operator+(FLOAT n) { return FLOAT(f + n.f); }
  FLOAT operator-(FLOAT n) { return FLOAT(f - n.f); }
  FLOAT operator/(FLOAT n) { return FLOAT(f / n.f); }
  FLOAT operator*(FLOAT n) { return FLOAT(f * n.f); }

  float get() { return f; }
};

int main() {
  FLOAT a = 22.5, b = 45.6;

  cout << "a = " << a.get() << " and b = " << b.get() NL;
  cout << "  a + b = " << (a + b).get() NL;
  cout << "  a - b = " << (a - b).get() NL;
  cout << "  a * b = " << (a * b).get() NL;
  cout << "  a / b = " << (a / b).get() NL;

  return 0;
}