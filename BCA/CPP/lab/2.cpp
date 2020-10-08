#include <iostream>
#define c(x) (x - 32) / 1.8

int main() {
    float x;
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> x;
    std::cout << x << " F = " << c(x) << " C" << std::endl;
    return 0;
}
