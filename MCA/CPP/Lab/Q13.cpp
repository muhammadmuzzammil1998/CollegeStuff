#include <iostream>

using namespace std;

int main() {
  extern int i;
  cout << "Counting till 10:" << endl;
  for (i = 0; i <= 10; ++i) {
    cout << i << " ";
  }
  return 0;
}

int i;
