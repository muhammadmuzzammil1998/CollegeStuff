#include <fstream>
#include <iostream>
using namespace std;

#define EoF "\\q\n"
#define LF "\n"

void write() {
  ofstream file("data.txt");
  string line;
  cin.ignore();
  do {
    getline(cin, line);
    line += LF;
    if (line != EoF) file << line;
  } while (line != EoF);
  file.close();
}

void read() {
  ifstream file("data.txt");
  string read;
  while (getline(file, read)) {
    cout << read << endl;
  }
  file.close();
}

int main() {
  int choice;
  do {
    cout << "Options:\n 1. Write\n 2. Read\n";
    cout << "Enter choice: ";
    cin >> choice;
    switch (choice) {
      case 1:
        write();
        break;
      case 2:
        read();
        break;
      case -1:
        break;
      default:
        cout << "Enter a valid selection." << endl;
    }
  } while (choice != -1);
}