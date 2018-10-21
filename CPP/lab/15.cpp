#include <iostream>
#define MAX 5

template <class T>
int sum(T* a) {
    int sum = 0;
    for (int i = 0; i < MAX; i++) {
        sum += a[i];
    }
    return sum;
}

template <class T>
int avg(T* a) {
    return sum(a) / MAX;
}

int main() {
    int arr[MAX];
    for (int i = 0; i < MAX; i++) {
        std::cout << "Enter number "
                  << i + 1 << " out of "
                  << MAX << ": ";
        std::cin >> arr[i];
    }
    std::cout << "SUM: " << sum(arr) << "\nAVG: " << avg(arr) << "\n";
    return 0;
}
