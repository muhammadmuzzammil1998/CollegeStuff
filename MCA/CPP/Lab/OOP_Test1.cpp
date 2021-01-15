#include <iostream>

using namespace std;

int main() {
  int m, n;

  cout << "Enter diamensions of matrix (m n): ";
  cin >> m >> n;

  int matrix[m][n];

  for (int i = 0; i < m; i++) {
    cout << "Enter for row " << i + 1 << ":" << endl;
    for (int j = 0; j < n; j++) {
      cout << "  Enter for column " << j + 1 << ": ";
      cin >> matrix[i][j];
    }
  }

  cout << "Matrix -" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << "    " << matrix[i][j] << " ";
    }
    cout << endl;
  }
}