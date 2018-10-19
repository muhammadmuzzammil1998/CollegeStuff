#include <iostream>

int main() {
    int notes[] = {500, 100, 50, 20, 10, 5, 1}, count[7], amt, oamt;
    std::cout << "Enter amount: ";
    std::cin >> amt;
    oamt = amt;
    for (int i = 0; i < 7; i++)
        if (amt >= notes[i]) {
            count[i] = amt / notes[i];
            amt -= count[i] * notes[i];
        }

    std::cout << "Currency notes needed to make " << oamt << ": \n";
    for (int i = 0; i < 7; i++)
        std::cout << notes[i] << ": " << count[i] << std::endl;
    return 0;
}
