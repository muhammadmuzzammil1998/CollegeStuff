#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <iostream>

class Matrix {
#define SPACE std::setw((this->width * this->N) + this->width - 1)
#define MAX 100
   private:
    int M, N, width, matrix[MAX][MAX];

   public:
    Matrix(int M, int N) {
        if (M > MAX || N > MAX) {
            std::cout << "Max limit reached, reduced to " << MAX << "x" << MAX << std::endl;
            M = MAX;
            N = MAX;
        }
        this->M = M;
        this->N = N;
        for (int i = 0; i < this->M; i++) {
            for (int j = 0; j < this->N; j++) {
                this->matrix[i][j] = 0;
            }
        }
    }
    void SetWidth(int n) {
        this->width = n;
    }
    void Add(int value, int m, int n) {
        if (m > this->M || n > this->N) {
            std::cout << "Index out of reach" << std::endl;
            return;
        }
        this->matrix[m - 1][n - 1] = value;
    }
    void Display() {
        std::cout << "__" << SPACE << "__\n";
        for (int i = 0; i < this->M; i++) {
            std::cout << "|";
            for (int j = 0; j < this->N; j++) {
                std::cout << std::setw(this->width) << this->matrix[i][j];
            }
            std::cout << "   |\n";
        }
        std::cout << "--" << SPACE << "--\n";
    }
    int Sum() {
        int sum = 0;
        for (int i = 0; i < this->M; i++) {
            for (int j = 0; j < this->N; j++) {
                sum += this->matrix[i][j];
            }
        }
        return sum;
    }
    int RowSum(int row) {
        int sum = 0;
        for (int i = 0; i < this->N; i++) {
            sum += this->matrix[row - 1][i];
        }
        return sum;
    }
    int ColSum(int col) {
        int sum = 0;
        for (int i = 0; i < this->N; i++) {
            sum += this->matrix[i][col - 1];
        }
        return sum;
    }
    void Randomize() {
        srand(time(NULL));
        for (int i = 0; i < this->M; i++) {
            for (int j = 0; j < this->N; j++) {
                this->Add(rand() % 101, i + 1, j + 1);
            }
        }
    }
    Matrix Transpose() {
        Matrix tMat(this->M, this->N);
        for (int i = 0; i <= this->N; i++) {
            for (int j = 0; j <= this->M; j++) {
                tMat.Add(matrix[j - 1][i - 1], i, j);
            }
        }
        tMat.SetWidth(this->width);
        return tMat;
    }
};

int main() {
    int r, c;
    std::cout << "Enter matrix rows: ";
    std::cin >> r;
    std::cout << "Enter matrix columns: ";
    std::cin >> c;
    Matrix matrix(r, c);
    matrix.SetWidth(5);
    std::cout
        << "Select an operation on matrix:" << std::endl
        << " 1. Add elements" << std::endl
        << " 2. Add elements recursively" << std::endl
        << " 3. Display matrix" << std::endl
        << " 4. Sum of all elements" << std::endl
        << " 5. Row-wise sum" << std::endl
        << " 6. Column-wise sum" << std::endl
        << " 7. Transpose matrix" << std::endl
        << " 8. Populate matrix" << std::endl
        << " 9. Exit" << std::endl;
    int ch = 0;
    do {
        std::cout << "Your choice: ";
        std::cin >> ch;
        int row = 0, column = 0, value = 0;
        switch (ch) {
            case 1: {
                std::cout << "Enter row and column: ";
                std::cin >> row >> column;
                std::cout << "Enter value: ";
                std::cin >> value;
                matrix.Add(value, row, column);
                break;
            }
            case 2: {
                std::cout << "Adding elements recursively..." << std::endl;
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < c; j++) {
                        std::cout << "m[" << i + 1 << "][" << j + 1 << "] = ";
                        std::cin >> value;
                        matrix.Add(value, i + 1, j + 1);
                    }
                }
                break;
            }
            case 3:
                matrix.Display();
                break;
            case 4:
                std::cout << "Sum of all elements: " << matrix.Sum() << std::endl;
                break;
            case 5: {
                std::cout << "Enter row number: ";
                std::cin >> row;
                std::cout << "Sum of row " << row << " elements: " << matrix.RowSum(row) << std::endl;
                break;
            }
            case 6: {
                std::cout << "Enter column number: ";
                std::cin >> column;
                std::cout << "Sum of column " << column << " elements: " << matrix.ColSum(column) << std::endl;
                break;
            }
            case 7: {
                Matrix tMatrix = matrix.Transpose();
                tMatrix.Display();
                break;
            }
            case 8: {
                matrix.Randomize();
                std::cout << "Matrix filled, use option 3 to view the matrix." << std::endl;
                break;
            }
            case 9:
                break;
            default:
                std::cout << "Invalid option!" << std::endl;
        }
    } while (ch != 9);
}
