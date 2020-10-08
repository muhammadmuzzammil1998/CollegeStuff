#include <stdio.h>

int main() {
    float x[100], fx[100], a;
    int n;
    printf("Finding f(a) using Divided Difference Method\n\n");
    printf("Enter the number of elements in the table: ");
    scanf("%d", &n);
    printf("Enter the values for x and f(x): \n");
    for (int i = 1; i <= n; i++) {
        printf("x%d f(x%d) = ", i, i);
        scanf("%f %f", &x[i], &fx[i]);
    }
    printf("Table:\n");
    printf("   _____________________________\n");
    printf("  | %10s\t| %10s\t|\n", "x", "f(x)");
    printf("  |-------------|---------------|");
    for (int i = 1; i <= n; i++) {
        printf("\n  | %10.3f\t| %10.3f\t|", x[i], fx[i]);
    }
    printf("\n   -----------------------------");
    float fa = fx[1];
    printf("\nFind f(a) where a = ");
    scanf("%f", &a);
    int j = 1;
    do {
        for (int i = 1; i <= n - 1; i++) {
            fx[i] = (fx[i + 1] - fx[i]) / (x[i + j] - x[i]);
        }
        float f1 = 1;
        for (int i = 1; i <= j; i++) {
            f1 *= a - x[i];
        }
        fa += fx[1] * f1;
        n--;
        j++;
    } while (n != 1);
    printf("f(%.3f) = %.3f", a, fa);
    return 0;
}
