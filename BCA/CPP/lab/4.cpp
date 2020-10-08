#include <iostream>

int main() {
    char x;
    std::cout << "Enter a character: ";
    std::cin >> x;
    int y = x;
    std::cout << "ASCII value of " << x << " is " << y << std::endl;
    return 0;
}
