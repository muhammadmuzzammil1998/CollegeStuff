#include <iostream>

using namespace std;

class fraction {
  double n, d;

 public:
  fraction(double n, double d) : n(n), d(d) {}
  fraction() : n(0), d(1) {
    cout << "  Enter numerator part of fraction: ";
    cin >> n;
    cout << "  Enter denominator part of fraction: ";
    cin >> d;
  }
  friend ostream& operator<<(ostream&, fraction&);

  bool operator==(fraction f) { return (n / d) == (f.n / f.d); }
  bool operator!=(fraction f) { return (n / d) != (f.n / f.d); }
  bool operator>=(fraction f) { return (n / d) >= (f.n / f.d); }
  bool operator<=(fraction f) { return (n / d) <= (f.n / f.d); }
  bool operator<(fraction f) { return (n / d) < (f.n / f.d); }
  bool operator>(fraction f) { return (n / d) > (f.n / f.d); }
};

ostream& operator<<(ostream& o, fraction& f) {
  return (o << f.n << "/" << f.d);
}

string Boolean(bool i) { return i ? "True" : "False"; }

int main() {
  cout << "Enter fraction a: " << endl;
  fraction a;

  cout << "\nEnter fraction b: " << endl;
  fraction b;

  cout << "\nGot:\n a = " << a << "\n b = " << b << endl << endl;

  cout << "Performing relational operations on a and b: " << endl;
  cout << "  a <  b = " << Boolean(a < b) << endl;
  cout << "  a  > b = " << Boolean(a > b) << endl;
  cout << "  a == b = " << Boolean(a == b) << endl;
  cout << "  a != b = " << Boolean(a != b) << endl;
  cout << "  a >= b = " << Boolean(a >= b) << endl;
  cout << "  a <= b = " << Boolean(a <= b) << endl;

  return 0;
}