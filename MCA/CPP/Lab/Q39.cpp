#include <iostream>

using namespace std;
int x = 25;
class test {
 private:
  int x = 45;

 public:
  void print(int x) {
    cout << "Local X: " << x << endl;
    cout << "Class X: " << this->x << endl;
    cout << "Global X: " << ::x << endl;
  }
};

int main() {
  test t;
  t.print(65);
}