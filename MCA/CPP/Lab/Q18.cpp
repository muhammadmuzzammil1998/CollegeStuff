#include <iostream>

using namespace std;

inline int cube(int n) { return n * n * n; }

int main() {
  int x = cube(3);
  cout << x;
  return 0;
}