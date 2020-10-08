#include <iostream>

const char* gets(int n) {
    return n > 1 ? "s " : " ";
}

int main() {
    int n;
    std::cout << "Enter number of days: ";
    std::cin >> n;
    int y = n / 365, m = (n % 365) / 30, d = (n % 365) - (m * 30);
    std::cout << n << " days = ";
    if (y > 0)
        std::cout << y << " year" << gets(y);
    if (m > 0)
        std::cout << m << " month" << gets(m);
    if (d > 0)
        std::cout << d << " day" << gets(d);
    std::cout << std::endl;
    return 0;
}
