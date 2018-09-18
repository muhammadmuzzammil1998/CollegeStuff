#include <iostream>

int main() {
    float r, area;
    std::cout << "Enter radius of Circle: ";
    std::cin >> r;
    area = 3.14 * (r * r);
    std::cout << "Area of Circle is: " << area << std::endl;

    return 0;
}
