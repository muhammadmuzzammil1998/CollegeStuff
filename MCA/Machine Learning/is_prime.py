from math import sqrt
import sys


def is_prime(n):
    if n <= 1:
        return False

    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False

    return True


if is_prime(int(sys.argv[1])):
    print("It is a prime number")
else:
    print("It is not a prime number")
