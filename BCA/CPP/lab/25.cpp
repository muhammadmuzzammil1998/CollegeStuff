#include <iostream>

class Complex {
   private:
    float n;
    float i;

   public:
    void set(float n, float i) {
        this->n = n;
        this->i = i;
    }
    void disp() {
        std::cout << n << " i " << i << std::endl;
    }
    Complex sum(Complex x) {
        Complex t;
        t.set(this->n + x.n, this->i + x.i);
        return t;
    }
};

int main() {
    Complex a, b, c;
    float n, i;
    std::cout << "Enter a number and its imaginary part: ";
    std::cin >> n >> i;
    a.set(n, i);
    std::cout << "Enter another number and its imaginary part: ";
    std::cin >> n >> i;
    b.set(n, i);
    c = a.sum(b);
    std::cout << "Complex a = ";
    a.disp();
    std::cout << "Complex b = ";
    b.disp();
    std::cout << "Complex c = ";
    c.disp();
}
