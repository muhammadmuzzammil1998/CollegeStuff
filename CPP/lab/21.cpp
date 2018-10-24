#include <string.h>
#include <iostream>

int main() {
    char org[100], rev[100];
    bool matched = true;
    std::cout << "Enter the string: ";
    std::cin.getline(org, 100);
    for (int i = strlen(org) - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = org[i];
    }
    for (int i = 0; i < strlen(org); i++) {
        if (org[i] != rev[i]) {
            matched = false;
            break;
        }
    }
    std::cout << "The siring "
              << (matched ? "is" : "is not")
              << " a palindrome" << std::endl;
    return 0;
}
