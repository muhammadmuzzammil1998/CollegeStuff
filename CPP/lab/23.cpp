#include <iomanip>
#include <iostream>

#define MAX 100
#define SPACE(c) std::setw((5 * c) + 4)

void add(int arr[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        std::cout << "  Enter elements for row #" << i + 1 << ": ";
        for (int j = 0; j < c; j++) {
            std::cin >> arr[i][j];
        }
    }
}

void dump(int arr[MAX][MAX], int r, int c) {
    std::cout << "\t__" << SPACE(c) << "__\n";
    for (int i = 0; i < r; i++) {
        std::cout << "\t|";
        for (int j = 0; j < c; j++) {
            std::cout << std::setw(5) << arr[i][j];
        }
        std::cout << "   |\n";
    }
    std::cout << "\t--" << SPACE(c) << "--\n";
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], product[MAX][MAX], ar, ac, br, bc;
    std::cout << "Enter how many rows and columns will there be for A: ";
    std::cin >> ar >> ac;
    std::cout << "Enter how many rows and columns will there be for B: ";
    std::cin >> br >> bc;
    if (ar != bc) {
        std::cout << "Rows and columns didn't match.";
        return 1;
    }
    std::cout << "Enter elements for matrix A:\n";
    add(A, ar, ac);
    std::cout << "Matrix A:\n";
    dump(A, ar, ac);
    std::cout << "Enter elements for matrix B:\n";
    add(B, br, bc);
    std::cout << "Matrix B:\n";
    dump(B, br, bc);
    std::cout << "Dot product of A and B is:\n";
    for (int i = 0; i < ar; ++i) {
        for (int j = 0; j < bc; ++j) {
            for (int k = 0; k < ac; ++k) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    dump(product, ar, bc);
    return 0;
}
