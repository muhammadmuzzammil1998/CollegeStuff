#include <iostream>

using namespace std;

class Animal {
 public:
  void eat() { cout << "Animal is eating..." << endl; }
};

class Dog : public Animal {
  string name;

 public:
  void eat() { cout << name << " is eating..." << endl; }
  Dog(string name) : name(name) {}
};

int main(void) {
  Dog spike = Dog("Spike");
  Animal tom;
  spike.eat();
  tom.eat();
  return 0;
}