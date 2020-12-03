#include <iostream>

using namespace std;

void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

int main() {
  int a, b;
  cout << "Enter two integers (a b): ";
  cin >> a >> b;
  cout << "Registered a = " << a << " and b = " << b << endl;
  swap(a, b);
  cout << "After swap, a = " << a << " and b = " << b << endl;

  return 0;
}
