import sys


def natural_sum(n):
    return (n**2 + n) / 2


n = int(sys.argv[1])
print("Sum of natural numbers till {} = {}"
      .format(n, natural_sum(n)))
