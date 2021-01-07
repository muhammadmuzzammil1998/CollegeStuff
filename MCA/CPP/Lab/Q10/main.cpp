#include <iostream>

#include "./mathfunc.h"

using namespace std;

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  cout << "Addition: " << add(a, b) << endl;
  cout << "Subtraction: " << sub(a, b) << endl;
  return 0;
}

Write a program to find