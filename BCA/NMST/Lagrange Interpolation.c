#include <stdio.h>

int main() {
    float x[100], fx[100];
    int n, i;
    printf("Finding f(a) using Lagrange Interpolation\n\n");
    printf("Enter the number of elements in the table: ");
    scanf("%d", &n);
    printf("Enter the values for x and f(x): \n");
    for (i = 0; i < n; i++) {
        printf("x%d f(x%d) = ", i + 1, i + 1);
        scanf("%f %f", &x[i], &fx[i]);
    }
    printf("Table:\n");
    printf("   _____________________________\n");
    printf("  | %10s\t| %10s\t|\n", "x", "f(x)");
    printf("  |-------------|---------------|");
    for (i = 0; i < n; i++) {
        printf("\n  | %10.3f\t| %10.3f\t|", x[i], fx[i]);
    }
    printf("\n   -----------------------------");
    printf("\nFind f(a) where a = ");
    float a, fa = 0;
    scanf("%f", &a);
    for (i = 0; i < n; i++) {
        float s = 1, t = 1;
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            s *= (a - x[j]);
            t *= (x[i] - x[j]);
        }
        fa += s / t * fx[i];
    }
    printf("f(%.3f) = %.3f", a, fa);
    return 0;
}
