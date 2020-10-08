#include <iostream>

void printPrimes(int a, int b) {
    bool print;
    for (int i = a; i < b; i++) {
        print = false;
        for (int j = 2; j < i; j++)
            if (i % j == 0) {
                print = true;
                break;
            }
        if (print == false && i > 1)
            std::cout << i << " ";
    }
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Prime numbers between " << a << " and " << b << " are:\n";
    printPrimes(a, b);
    std::cout << std::endl;
    return 0;
}
