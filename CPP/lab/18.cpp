#include <iostream>

int largest(int arr[], int length) {
    int h = arr[0];
    for (int i = 0; i < length; i++)
        if (h < arr[i])
            h = arr[i];
    return h;
}

int smallest(int arr[], int length) {
    int s = arr[0];
    for (int i = 0; i < length; i++)
        if (s > arr[i])
            s = arr[i];
    return s;
}

int main() {
    int arr[5];
    std::cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> arr[i];
    }
    int size = (sizeof(arr) / sizeof(*arr));
    std::cout << "Largest: " << largest(arr, size) << "\nSmallest: " << smallest(arr, size) << "\n";
    return 0;
}
