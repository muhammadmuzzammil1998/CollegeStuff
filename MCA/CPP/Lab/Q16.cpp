#include <iostream>
#include <string>

using namespace std;

struct Student {
  int rollno;
  string name;
  double marks;
};

int main() {
  int n;
  cout << "Enter number of students: ";
  cin >> n;

  Student students[n];

  for (int i = 0; i < n; i++) {
    cout << "\n\nEnter Name: ";
    cin.ignore();
    getline(cin, students[i].name);

    cout << "Enter rollno: ";
    cin >> students[i].rollno;

    cout << "Enter Marks: ";
    cin >> students[i].marks;
  }

  double sum;
  for (int i = 0; i < n; i++) {
    sum += students[i].marks;
  }
  cout << "Class average: " << sum / n << endl;

  return 0;
}