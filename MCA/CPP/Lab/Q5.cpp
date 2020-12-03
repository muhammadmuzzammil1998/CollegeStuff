#include <iostream>

using namespace std;

bool isPrime(int n) {
  bool prime = true;
  for (int i = 2; prime && i < n; i++) {
    prime = !(n % i == 0);
  }
  return prime;
}

void printPrimes(int a, int b) {
  for (int i = 0; a <= b; a++) {
    if (isPrime(a)) {
      cout << "Prime #" << ++i << ".\t" << a << endl;
    }
  }
}

int main() {
  int a, b;

  cout << "Enter two numbers: ";
  cin >> a >> b;

  cout << "Prime numbers between " << a << " and " << b << " are:\n";
  printPrimes(a, b);
  cout << endl;

  return 0;
}
