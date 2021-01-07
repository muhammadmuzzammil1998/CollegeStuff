#include <iostream>

using namespace std;

class Employee {
  float salary;
  int hours;

 public:
  void getInfo(float, int);
  float getSalary();
  int getHours();
  void addSal();
  void addWork();
};

void Employee::getInfo(float salary, int hours) {
  this->salary = salary;
  this->hours = hours;
}

float Employee::getSalary() { return this->salary; }

int Employee::getHours() { return this->hours; }

void Employee::addSal() {
  if (this->salary < 500) {
    this->salary += 10;
  }
}

void Employee::addWork() {
  if (this->hours > 6) this->salary += 5;
}

int main() {
  Employee e1, e2, e3;

  e1.getInfo(400, 5);
  e2.getInfo(400, 7);
  e3.getInfo(700, 9);

  e1.addSal();
  e2.addSal();
  e3.addSal();

  e1.addWork();
  e2.addWork();
  e3.addWork();

  cout << "Employee 1" << endl;
  cout << "  Salary: $" << e1.getSalary() << endl;
  cout << "  Hours per day: " << e1.getHours() << endl;

  cout << "Employee 2" << endl;
  cout << "  Salary: $" << e2.getSalary() << endl;
  cout << "  Hours per day: " << e2.getHours() << endl;

  cout << "Employee 3" << endl;
  cout << "  Salary: $" << e3.getSalary() << endl;
  cout << "  Hours per day: " << e3.getHours() << endl;

  return 0;
}