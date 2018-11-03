#include <fstream>
#include <iostream>

int main() {
    std::ifstream infile("29.txt", std::ifstream::in);
    std::ofstream outfile("29-copy.txt", std::ofstream::out);
    char ch;
    bool spaced = false;
    while (infile >> std::noskipws >> ch) {
        if (spaced && ch != ' ') {
            spaced = false;
            outfile << " ";
        }
        if (ch == ' ') {
            spaced = true;
            continue;
        }
        outfile << ch;
    }
    infile.close();
    outfile.close();
    return 0;
}
