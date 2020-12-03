#include <iostream>

using namespace std;

int main() {
  unsigned long long n, sum, div = 10;

  cout << "Enter a number: ";
  cin >> n;

  do {
    cout << n << "\t" << sum << endl;
    sum += n % div;
    n /= div;
  } while (n > 0);

  cout << "Sum of digits: " << sum << endl;

  return 0;
}
