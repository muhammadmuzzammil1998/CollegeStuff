#include <fstream>
#include <iostream>
using namespace std;

#define EoF "\\q\n"
#define LF "\n"

void write() {
  ofstream file("data.txt");
  string line;
  cout << "\n<<<Writing data to file>>>\n";
  cout << "Enter '\\q' to quit.\n";
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
  cout << "\n<<<Reading data from file>>>\n\n";
  string read;
  while (getline(file, read)) {
    cout << read << endl;
  }
  file.close();
}

int main() {
  int choice;
  do {
    cout << "\n\nOptions:\n  1. Write\n  2. Read\n -1: Exit\n\n";
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