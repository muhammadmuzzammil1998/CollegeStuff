from math import sqrt


def quad_eq(a, b, c):
    sq = sqrt(b**2 - (4*a*c))

    if sq > 0:
        first_root = (-b + sq)/(2*a)
        second_root = (-b - sq)/(2*a)
        return [first_root, second_root]

    return [-b/(2*a)]


def get_int(text):
    return int(input(text))


while True:
    print("\nEnter variables:")
    a = get_int("> a = ")
    b = get_int("> b = ")
    c = get_int("> c = ")

    roots = quad_eq(a, b, c)
    print("Found {} root(s): {}".format(len(roots), roots))
