#include <iostream>
#define LIM 10

using namespace std;

class Student {
  string name, address;
  int age;

 public:
  Student() {
    name = "unknown";
    address = "not available";
    age = 0;
  }
  void setInfo(string name, string address) {
    this->name = name;
    this->address = address;
  }
  void setInfo(string name, string address, int age) {
    this->name = name;
    this->address = address;
    this->age = age;
  }
  void printInfo() {
    cout << " Name: " << name << endl;
    cout << " Address: " << address << endl;
    cout << " Age: " << age << endl;
  }
};

int main() {
  Student students[LIM];
  int age;
  string name, address;
  for (int i = 0; i < LIM; i++) {
    cout << "Student " << i + 1 << endl;

    cout << " Age:\t";
    cin >> age;

    cout << " Name:\t\t";
    cin.ignore();
    getline(cin, name);

    cout << " Address:\t";
    cin.ignore();
    getline(cin, address);

    students[i].setInfo(name, address, roll_no);
  }

  for (int i = 0; i < LIM; i++) {
    cout << "Student " << i + 1 << endl;
    students[i].printInfo();
  }
}