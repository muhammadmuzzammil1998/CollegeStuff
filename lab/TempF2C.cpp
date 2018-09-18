#include <iostream>
#define f(x) 5 * (x - 32) / 9

int main() {
    float x;
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> x;
    std::cout << x << " F = " << f(x) << std::endl;
    return 0;
}
