#include <iostream>

class Base {
   public:
    virtual void print() {
        std::cout << "print base class" << std::endl;
    }
    void show() {
        std::cout << "show base class" << std::endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        std::cout << "print derived class" << std::endl;
    }
    void show() {
        std::cout << "show derived class" << std::endl;
    }
};

int main() {
    Base *b, base;
    Derived d;
    base.print();  // Print from base class
    base.show();   // Show from base class
    b = &d;        // Pointer 'b' now points to address of 'd'
    b->print();    // Print from drived b; re-defined.
    b->show();     // Show from drived b
}
