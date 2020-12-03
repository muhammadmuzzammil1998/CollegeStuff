#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter size: ";
  cin >> size;

  int arr[size], max;

  cout << "Enter elements: ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < size; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }

  cout << "Largest element: " << max;

  return 0;
}