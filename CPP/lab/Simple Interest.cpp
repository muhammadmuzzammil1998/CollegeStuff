#include <iostream>

int main() {
    float p, r, t, i;
    std::cout << "Enter Principle, Rate and Time (in months) in sequence: ";
    std::cin >> p >> r >> t;
	t /= 12;
    i = (p * r * t) / 100;
    std::cout << "Simple interest = " << i << std::endl;
	return 0;
}
