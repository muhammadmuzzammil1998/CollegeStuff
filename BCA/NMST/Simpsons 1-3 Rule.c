#include <math.h>
#include <stdio.h>

#define ACCURACY 0.0001
#define f(x) 1 / (1 + x * x)

float simpsons13(float a, float b, int n) {
    float sum = 0;
    float h = fabs(b - a) / n;
    for (int i = 1; i < n; i++) {
        float x = a + i * h;
        sum += (i % 2 == 0 ? 2 : 4) * f(x);
    }
    return h / 3 * (f(a) + sum + f(b));
}

int main() {
    float a, b, i0;
    printf("Finding integral using Simpson's 1/3 Rule");
    printf("\n\nf(x) = 1 / (1 + x * x)\n\n");
    printf("Enter the limits: ");
    scanf("%f %f", &a, &b);
    float i1 = simpsons13(a, b, 2);
    int i = 2;
    do {
        i0 = i1;
        i++;
        i1 = simpsons13(a, b, i);
    } while (fabs(i1 - i0) >= ACCURACY);
    printf("The integral is %f with %d intervals.\n", i1, i);
    return 0;
}
