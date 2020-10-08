#include <iostream>

using namespace std;

void dump(int arr[], int n) {
    cout<<"\n\nArray:\n";
    for (int i = 0; i < n; i++)
        cout << "arr[" << i << "]"
             << " = " << arr[i] << endl;
}

int main() {
    int arr[50], size, insert, pos;
    cout << "Enter array size: ";
    cin >> size;
    cout << "Enter elements: \n";
    for (int i = 0; i < size; i++) {
        cout << "Enter #" << i+1 << ": ";
        cin >> arr[i];
    }
    dump(arr, size);
    cout << "\nEnter one more element, if any (-1 to skip): ";
    cin >> insert;
    if (insert >= 0) {
        cout << "Enter position of error: ";
        cin >> pos;
        for (int i = size; i > pos; i--)
            arr[i] = arr[i - 1];
        size++;
        arr[pos] = insert;
        dump(arr, size);
    }
    return 0;
}
