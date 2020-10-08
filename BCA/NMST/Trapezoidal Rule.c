#include <math.h>
#include <stdio.h>

#define ACCURACY 0.0001
#define f(x) 1 / (1 + x * x)

float trapezoidal(float a, float b, int n) {
    float h = fabs(b - a) / n, sum = 0;
    for (int i = 1; i < n; i++) {
        sum += f(a + i * h);
    }
    return (h / 2 * (f(a) + 2 * sum + f(b)));
}

int main() {
    float a, b, i0;
    printf("Finding integral using Trapezoidal Rule");
    printf("\n\nf(x) = 1 / (1 + x * x)\n\n");
    printf("Enter the limits: ");
    scanf("%f %f", &a, &b);
    float i1 = trapezoidal(a, b, 2);
    int i = 2;
    do {
        i0 = i1;
        i++;
        i1 = trapezoidal(a, b, i);
    } while (fabs(i1 - i0) >= ACCURACY);
    printf("The integral is %f with %d intervals.\n", i1, i);
    return 0;
}
