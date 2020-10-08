#include <stdio.h>

int main() {
    float x[100], fx[100], a;
    int n;
    printf("Finding f(a) using Newton's Backward Difference Method\n\n");
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
    float h = x[2] - x[1];
    printf("\nFind f(a) where a = ");
    scanf("%f", &a);
    float s = (a - x[n]) / h, p = 1, fa = fx[n];
    for (int i = n, k = 1; i >= 1 && k < n; i--, k++) {
        for (int j = n; j >= 1; j--) {
            fx[j] = fx[j] - fx[j - 1];
        }
        p *= (s + k - 1) / k;
        fa += p * fx[n];
    }
    printf("f(%.3f) = %.3f", a, fa);
    return 0;
}
