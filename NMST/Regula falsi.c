#include <math.h>
#include <stdio.h>

#define E 0.00001
#define F(x) x* x* x - 2 * x - 5
#define PRINT(i, a, b, x, fx) printf("%9d\t%.4f\t%.4f\t%.4f\t%f\n", i, a, b, x, fx);

int main() {
    float a, b;
    printf("Finding root using Regula falsi\n\nf(x) = x^3 - 2x - 5\n\nEnter values for a and b such that f(a) and f(b) are of opposite signs: ");
    scanf("%f %f", &a, &b);
    if (F(a) > 0 && F(b) > 0 || F(a) < 0 && F(b) < 0) {
        printf("f(a) = %.2f and f(b) = %.2f are of same sign, which means a root is not in between them.\n", F(a), F(b));
        return 1;
    }
    float fa, fb, x, fx;
    printf("Iteration\ta\tb\tx\tf(x)\n");
    for (int i = 1;; i++) {
        fa = F(a), fb = F(b), x = (a * fb - b * fa) / (fb - fa), fx = F(x);
        PRINT(i, a, b, x, F(x));
        if (x > 0)
            a = x;
        else
            b = x;
        if (fabs(fx) < E) {
            printf("\n\nAfter %d iterations, a root of the function is found to be %s%f", i, fx != 0 ? "approximately " : "", x);
            if (fx != 0)
                printf(" but is off by %f.\n", fx);
            else
                printf(".\n");
            break;
        }
    }

    return 0;
}
