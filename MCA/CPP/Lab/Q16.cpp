#include <iostream>
#include <string>

using namespace std;

class Student {
  int rollno;
  double marks;
  string name;

  void _print() {
    cout << " " << this->rollno << " " << this->name << "\t\t " << this->marks
         << endl;
  }

 public:
  void UpdateRollNo(int rollno) { this->rollno = rollno; }
  void UpdateMarks(double marks) { this->marks = marks; }
  void UpdateName(string name) { this->name = name; }

  int RollNo() { return this->rollno; }
  double Marks() { return this->marks; }
  string Name() { return this->name; }

  void PrintDetails() { this->_print(); }
  void GetDetails() {
    cout << "\n\nEnter Name: ";
    cin.ignore();
    getline(cin, this->name);
    cout << "Enter rollno: ";
    cin >> this->rollno;
    cout << "Enter Marks: ";
    cin >> this->marks;
  }
};

int main() {
  int n;
  cout << "Enter number of students: ";
  cin >> n;

  Student students[n];

  for (int i = 0; i < n; i++) {
    students[i].GetDetails();
  }

  students[0].UpdateName("Muzammil");

  cout << "\n\nStudents:\n";

  for (int i = 0; i < n; i++) {
    students[i].PrintDetails();
  }

  double sum;
  for (int i = 0; i < n; i++) {
    sum += students[i].Marks();
  }
  cout << "\nClass average: " << sum / n << endl;

  return 0;
}