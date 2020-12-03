#include <iostream>

using namespace std;

int main() {
  cout << "Finding average marks" << endl;

  int limit;
  cout << "Enter number of students in class: ";
  cin >> limit;

  float students[limit], sum = 0;

  for (int i = 0; i < limit; i++) {
    cout << "Enter marks of student " << i + 1 << ": ";
    cin >> students[i];
    sum += students[i];
  }

  cout << "Average marks: " << sum / limit << endl;
}