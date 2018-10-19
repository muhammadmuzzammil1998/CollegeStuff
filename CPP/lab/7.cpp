#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::string msg = "Number is ";
    msg += (n >= 0) ? "positive" : "negative";
    std::cout << msg << std::endl;
    return 0;
}
