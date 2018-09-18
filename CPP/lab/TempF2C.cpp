#include <iostream>
#define f(x) 5 * (x - 32) / 9
#define print std::cout <<
#define get std::cin >>
#define n std::endl;

int main() {
    float x;
    print "Enter temperature in Fahrenheit: ";
    get x;
    print x << " F = " << f(x) << n
    return 0;
}
