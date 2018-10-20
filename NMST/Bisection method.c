#include <math.h>
#include <stdio.h>

#define E 0.00001
#define F(x) x* x* x - 2 * x - 5
#define BISECT(x, y) (x + y) / 2

void print(int i, float a, float b, float x, float fx) {
    printf("%9d\t%.4f\t%.4f\t%.4f\t%.4f\n", i, a, b, x, fx);
}

int main() {
    float a, b;
    printf("Finding root using Bisection Method");
    printf("\n\nf(x) = x^3 - 2x - 5\n\n");
    printf("Enter values for a and b such that f(a) and f(b) are of opposite signs: ");
    scanf("%f %f", &a, &b);
    if (F(a) > 0 && F(b) > 0 || F(a) < 0 && F(b) < 0) {
        printf("f(a) = %.2f and f(b) = %.2f are of same sign, ", F(a), F(b));
        printf("which means a root is not in between them.\n");
        return 1;
    }
    float x0 = BISECT(a, b);
    printf("Iteration\ta\tb\tx\tf(x)\n");
    for (int i = 1;; i++) {
        float fa = F(a), fx = F(x0), pro = fa * fx;
        print(i, a, b, x0, F(x0));
        if (pro < 0)
            b = x0;
        else
            a = x0;
        x0 = BISECT(a, b);
        float x1 = BISECT(a, x0);
        if (fabs(x1 - x0) <= E) {
            printf("\n\nAfter %d iterations, ", i);
            printf("a root of the function is found to be %s%f",
                   F(x1) != 0 ? "approximately " : "", x1);
            if (F(x1) != 0)
                printf(" but is off by %f.\n", F(x1));
            else
                printf(".\n");
            break;
        }
        x0 = x1;
    }
    return 0;
}
