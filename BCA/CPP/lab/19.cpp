#include <iostream>

int main() {
    char str[] = "Hello, world!";
    int size = (sizeof(str) / sizeof(*str)) - 1;
    std::cout << "Length of string is " << size;
}
