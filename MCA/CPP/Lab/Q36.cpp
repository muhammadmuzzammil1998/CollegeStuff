#include <iostream>

using namespace std;

class marks {
 protected:
  int _marks;

 public:
  marks(int m) : _marks(m){};
  marks() {}

  void display() { cout << "Marks: " << _marks << endl; }
};

class student : protected marks {
 protected:
  int _roll_no;

 public:
  student(int r) : _roll_no(r){};
  student() {}

  void display() {
    cout << "Roll no: " << _roll_no << endl;
    cout << "Marks: " << _marks << endl;
  }
};

class school : public student {
 public:
  void getinfo() { student::display(); }
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
  cout << endl;
  s1.getinfo();
  s2.getinfo();
}
