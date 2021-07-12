#include <stdio.h>
int gcd(int a, int h) {
  int temp;
  while (1) {
    temp = a % h;
    if (temp == 0) return h;
    a = h;
    h = temp;
  }
}

void main() { printf("%d", gcd(8, 12)); }