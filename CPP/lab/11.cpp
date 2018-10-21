#include <iostream>

int main() {
    int a;
    std::cout << "Enter a year: ";
    std::cin >> a;
    std::cout << a << " is "
              << (a % 4 == 0 ? "a leap" : "not a leap")
              << " year.";
    return 0;
}
