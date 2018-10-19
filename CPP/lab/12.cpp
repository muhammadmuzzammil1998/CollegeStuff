#include <iostream>

int main() {
    int calls, tc;
    float bill;
    std::cout << "Enter number of calls: ";
    std::cin >> tc;
    calls = tc;
    bill = 200;
    if (calls > 100 && calls <= 150) {
        calls -= 100;
        bill += 0.60 * calls;
    } else if (calls > 150 && calls <= 200) {
        calls -= 150;
        bill += (0.60 * 50) + (0.50 * calls);
    } else {
        calls -= 200;
        bill += (0.60 * 50) + (0.50 * 50) + (0.40 * calls);
    }
    std::cout << "Your bill for " << tc << " calls is Rs. " << bill << std::endl;
    return 0;
}
