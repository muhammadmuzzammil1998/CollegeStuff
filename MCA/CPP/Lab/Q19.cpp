#include <iostream>

using namespace std;

class Student {
 public:
  string name;
  int roll_no;
};

int main() {
  Student stu;
  stu.name = "John";
  stu.roll_no = 2;
  cout << stu.roll_no << " " << stu.name << endl;
  return 0;
}