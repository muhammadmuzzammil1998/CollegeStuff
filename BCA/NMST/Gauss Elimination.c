#include <stdio.h>
#define MAX 3

void dump(float arr[MAX][MAX + 1]) {
    printf("__\t\t\t\t\t\t\t__\n");
    for (int i = 0; i < MAX; i++) {
        printf("|   ");
        for (int j = 0; j <= MAX; j++)
            printf("%s%7.3f     ", (j == MAX) ? "|    " : "", arr[i][j]);
        printf("|\n");
    }
    printf("--\t\t\t\t\t\t\t--\n");
}

int main() {
    float matrix[MAX][MAX + 1], x[MAX];
    printf("\nEnter the elements of augmented matrix:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf(" Enter the entire row %d: ", i + 1);
        for (int j = 0; j <= MAX; j++)
            scanf("%f", &matrix[i][j]);
    }
    printf("\n\n Your matrix: \n");
    dump(matrix);
    for (int j = 0; j < MAX; j++)
        for (int i = 0; i < MAX; i++)
            if (i > j) {
                float temp = matrix[i][j] / matrix[j][j];
                for (int k = 0; k <= MAX; k++)
                    matrix[i][k] = matrix[i][k] - temp * matrix[j][k];
            }
    x[MAX - 1] = matrix[MAX - 1][MAX] / matrix[MAX - 1][MAX - 1];
    for (int i = MAX - 2; i >= 0; i--) {
        float sum = 0;
        for (int j = i + 1; j < MAX; j++)
            sum += matrix[i][j] * x[j];
        x[i] = (matrix[i][MAX] - sum) / matrix[i][i];
    }
    printf("\n Solved matrix:\n");
    dump(matrix);
    printf("\n The solution is: \n");
    for (int i = 0; i < MAX; i++)
        printf("    %c = \t%.3f\n", i + 120, x[i]);
    return 0;
}
