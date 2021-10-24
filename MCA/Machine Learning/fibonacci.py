import sys


def fibonacci(n):
    f, s = 0, 1
    series = "{} {} ".format(f, s)
    for i in range(2, n):
        series += "{} ".format(f+s)
        f, s = s, f+s
    return series


term = int(sys.argv[1])
print("Fibonacci series till {} term".format(term))
print(fibonacci(term))
