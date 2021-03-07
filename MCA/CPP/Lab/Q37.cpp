#include <iostream>

using namespace std;

class Animal {
 public:
  void speak() { cout << "[undefined]" << endl; }
};

class Dog : public Animal {
 public:
  void speak() { cout << "Bark" << endl; }
};

class Cat : public Animal {
 public:
  void speak() { cout << "Meow" << endl; }
};

int main() {
  Dog Spike;
  Cat Tom;
  Animal Jerry;

  Spike.speak();
  Tom.speak();
  Jerry.speak();

  return 0;
}