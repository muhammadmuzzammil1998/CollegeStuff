#include <iostream>

using namespace std;

inline int cube(int n) { return n * n * n; }

// int cube(int n, int i = 3) {
//   if (i > 1) {
//     return n * cube(n, --i);
//   }
//   return n;
// }

int main() {
  int x = cube(3);
  cout << x;
  return 0;
}