#include <iostream>

using namespace std;

void print(int x, int y);

int main() {
  cout << "Swapping integers using a third variable" << endl;

  int x, y, z;

  cout << "Enter two integers : ";
  cin >> x >> y;

  cout << "Registered integers : ";
  print(x, y);

  z = x;
  x = y;
  y = z;

  cout << "Swapped integers : ";
  print(x, y);

  return 0;
}

void print(int x, int y) { cout << "x = " << x << " and y = " << y << endl; }
