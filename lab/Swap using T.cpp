#include <iostream>

template <class T> void swap(T &a, T &b) {
    a = a + b - (b = a);
}

int main() {
    int a, b;
    float x, y;
    std::cout << "Enter two integers and two floats: ";
    std::cin >> a >> b >> x >> y;
    std::cout << "Before swaping integers, a = " << a << " and b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swaping integers, a = " << a << " and b = " << b << std::endl;
    std::cout << "Before swaping floats, x = " << x << " and y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swaping floats, x = " << x << " and y = " << y << std::endl;
    return 0;
}
