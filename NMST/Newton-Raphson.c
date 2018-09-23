#include <math.h>
#include <stdio.h>

#define E 0.00001
#define F(x) x* x* x - 2 * x - 5
#define dF(x) 3 * x* x - 2
#define PRINT(i, x, fx, dfx) printf("%9d\t%.4f\t%.4f\t%.4f\n", i, x, fx, dfx);

int main() {
    float x;
    printf("Finding root using Newton-Raphson method\n\n");
    printf("f(x)\t= x^3 - 2x - 5\nf'(x)\t= 3x^2 - 2\n\n");
    printf("Enter value for x: ");
    scanf("%f", &x);
    printf("Iteration\tx\tf(x)\tf'(x)\n");
    for (int i = 1;; i++) {
        float fx = F(x), dFx = dF(x);
        PRINT(i, x, fx, dFx);
        x -= fx / dFx;
        if (fabs(F(x)) < E) {
            printf("\n\nAfter %d iterations, a root of the function is found to be %s%f", i, F(x) != 0 ? "approximately " : "", x);
            if (F(x) != 0)
                printf(" but is off by %f.\n", F(x));
            else
                printf(".\n");
            break;
        }
    }
    return 0;
}
