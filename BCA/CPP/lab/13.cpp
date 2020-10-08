#include <iostream>

int main() {
    int c;
    char ch;
    while (1) {
        std::cout << "Enter a character: ";
        std::cin >> ch;
        c = ch;
        if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126))
            std::cout << ch << " is a special symbol.";
        else if (c >= 48 && c <= 57)
            std::cout << ch << " is a number.";
        else if (c >= 65 && c <= 90)
            std::cout << ch << " is an upper case letter.";
        else if (c >= 97 && c <= 122)
            std::cout << ch << " is a small case letter.";
        else
            std::cout << "Undefined char " << ch;
        std::cout << "\n";
    }
    return 0;
}
