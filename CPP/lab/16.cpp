#include <iostream>

class Float {
   private:
    float data;

   public:
    Float(float f) : data(f) {}

    float operator+(Float f) {
        return f.data + this->data;
    }
    float operator-(Float f) {
        return f.data - this->data;
    }
    float operator*(Float f) {
        return f.data * this->data;
    }
    float operator/(Float f) {
        return f.data / this->data;
    }
};

int main() {
    Float a = 2.2, b = 3.2;
    std::cout << "a + b = " << a + b << "\n";
    std::cout << "a - b = " << a - b << "\n";
    std::cout << "a * b = " << a * b << "\n";
    std::cout << "a / b = " << a / b << "\n";
    return 0;
}
