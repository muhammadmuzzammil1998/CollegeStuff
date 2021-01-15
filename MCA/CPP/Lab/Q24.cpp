#include <iostream>

using namespace std;
class static_func {
  int code;

 public:
  static int count;
  void setcode() { code = ++count; }
  void showcode() { cout << "Object #" << code << endl; }
  static void showcount() { cout << "Count #" << count << endl; }
};

int static_func::count;

int main() {
  static_func t1, t2, t3;
  static_func::showcount();

  t1.setcode();

  cout << "Count #" << static_func::count << " Count accessed from main"
       << endl;

  t2.setcode();

  static_func::showcount();

  t3.setcode();

  static_func::showcount();

  t1.showcode();
  t2.showcode();
  t3.showcode();

  return 0;
}