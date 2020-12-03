#include <iostream>

using namespace std;

int main() {
  int factor = 5;
  for (register int i = 1; i <= 50; i++) {
    cout << i * factor << " ";
  }
}