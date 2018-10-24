#include <string.h>
#include <iostream>
int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    int count = 1;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ' && str[i + 1] != ' ')
            count++;
    std::cout << "Number of words: " << count;
}
