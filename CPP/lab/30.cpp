#include <fstream>
#include <iostream>

void read(const char* n) {
    char ch;
    std::ifstream f(n, std::ifstream::in);
    while (f >> std::noskipws >> ch) {
        std::cout << ch;
    }
    f.close();
}

void write(const char* n, const char* w) {
    std::ofstream f(n, std::ofstream::out);
    f << w;
    f.close();
}

int main() {
    write("file1.txt", "Hello from file1\n");
    write("file2.txt", "Hello from file2\n");
    read("file1.txt");
    read("file2.txt");
    write("file1.txt", "Hello from file1, again\n");
    read("file1.txt");
}
