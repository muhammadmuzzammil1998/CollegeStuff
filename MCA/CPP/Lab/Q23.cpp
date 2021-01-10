#include <iostream>

using namespace std;

class Student {
  string name;
  int roll_no;

 public:
  static int student_count;
  void set(string s, int i) {
    name = s;
    roll_no = i;
    student_count++;
  }
  int get_count() { return student_count; }
};

int Student::student_count;

int main() {
  Student a, b, c, d;

  a.set("A", 1);
  cout << "Student count: " << a.get_count() << endl;

  b.set("B", 2);
  cout << "Student count: " << a.get_count() << endl;

  c.set("C", 3);
  cout << "Student count: " << a.get_count() << endl;

  d.set("D", 4);
  cout << "Student count: " << b.get_count() << endl;
}