#include <math.h>
#include <stdio.h>
#define E 0.0001
#define MAX 3

void dump(float arr[MAX + 1][MAX + 1]) {
    printf("__\t\t\t\t\t\t\t__\n");
    for (int i = 1; i <= MAX; i++) {
        printf("|   ");
        for (int j = 1; j <= MAX + 1; j++)
            printf("%s%7.3f     ", (j == MAX + 1) ? "|    " : "", arr[i][j]);
        printf("|\n");
    }
    printf("--\t\t\t\t\t\t\t--\n");
}

int main() {
    float err, matrix[MAX + 1][MAX + 1], x[MAX + 1];
    printf("\nEnter the elements of augmented matrix:\n\n");
    for (int i = 1; i <= MAX; i++) {
        printf(" Enter the entire row %d: ", i);
        for (int j = 1; j <= MAX + 1; j++)
            scanf("%f", &matrix[i][j]);
    }
    printf("\n\n Your matrix: \n");
    dump(matrix);
    for (int i = 1; i <= MAX; i++) x[i] = 0;
    do {
        err = 0;
        for (int i = 1; i <= MAX; i++) {
            float sum = 0;
            for (int j = 1; j <= MAX; j++)
                if (j != i)
                    sum = sum + matrix[i][j] * x[j];
            float temp = (matrix[i][MAX + 1] - sum) / matrix[i][i];
            float error = fabs(x[i] - temp);
            if (error > err) err = error;
            x[i] = temp;
        }
    } while (err >= E);
    printf("\n\n Solution:\n");
    for (int i = 1; i <= MAX; i++)
        printf("    %c =%8.3f\n", i + 119, x[i]);
    return 0;
}
