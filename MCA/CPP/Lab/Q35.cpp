#include <iostream>

using namespace std;

class marks {
 protected:
  int _marks;

 public:
  marks(int m) : _marks(m){};
  marks() {}
};

class student {
 protected:
  int _roll_no;

 public:
  student(int r) : _roll_no(r){};
  student() {}
};

class school : private student, marks {
 public:
  void getinfo() { cout << _roll_no << "  " << _marks << endl; }
  void setinfo() {
    cout << "Enter roll number: ";
    cin >> _roll_no;
    cout << "Enter marks: ";
    cin >> _marks;
  }
  school() {}
};

int main() {
  school s1, s2;
  s1.setinfo();
  s2.setinfo();
  s1.getinfo();
  s2.getinfo();
}