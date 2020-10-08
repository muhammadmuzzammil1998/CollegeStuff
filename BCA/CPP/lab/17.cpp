#include <iostream>
#define SIZE 10

void dump(int* arr) {
    std::cout << "int[" << SIZE << "] = { ";
    for (int i = 0; i < SIZE; i++)
        std::cout << arr[i] << " ";
    std::cout << "}";
}

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int iarr[SIZE];
    for (int i = 0; i < SIZE; i++)
        iarr[i] = arr[(SIZE - 1) - i];
    dump(arr);
    std::cout << "\n";
    dump(iarr);
    std::cout << "\n";
}
