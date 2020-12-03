#include <iostream>

using namespace std;

int main() {
  int n;
  bool prime = true;

  cout << "Enter a number: ";
  cin >> n;

  for (int i = 2; prime && i < n; i++) {
    prime = !(n % i == 0);
  }

  cout << "The number " << n << " is " << (prime ? "prime" : "not prime")
       << endl;

  return 0;
}
