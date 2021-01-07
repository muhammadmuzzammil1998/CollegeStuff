#include <iostream>

using namespace std;

int main() {
  extern int i;
  cout << "Counting till 10 from " << i << ":" << endl;
  for (; i <= 10; ++i) {
    cout << i << " ";
  }
  return 0;
}