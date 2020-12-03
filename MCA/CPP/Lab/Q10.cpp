#include <iostream>

using namespace std;

int staticIncrement() {
  static int counter = 0;
  return ++counter;
}

int normalIncrement(int counter) { return ++counter; }

int main() {
  cout << "Static count:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << staticIncrement() << " ";
  }

  cout << endl << "Normal count:" << endl;

  int x = 0;

  for (int i = 0; i < 5; i++) {
    x = normalIncrement(x);
    cout << x << " ";
  }
  cout << endl;
  return 0;
}