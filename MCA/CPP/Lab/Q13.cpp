#include <iostream>
using namespace std;

int size;

int* reverse(int arr[]) {
  int* temp;
  for (int i = 0, j = size; i < size; i++) {
    temp[i] = arr[--j];
  }
  return temp;
}

void dump(int* arr) {
  for (int i = 0; i < size; i++, arr++) {
    cout << *arr << " ";
  }
}

int main() {
  cout << "Enter size: ";
  cin >> size;

  int org[size], *rev;

  cout << "Enter elements: ";
  for (int i = 0; i < size; i++) {
    cin >> org[i];
  }

  rev = reverse(org);

  cout << "Reversed array: ";
  dump(rev);

  return 0;
}