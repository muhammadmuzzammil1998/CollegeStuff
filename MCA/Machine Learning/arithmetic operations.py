def add(a, b):
    return a + b


def subtract(a, b):
    return a - b


def divide(a, b):
    return a / b


def multiply(a, b):
    return a * b


def get_int(text):
    return int(input(text))


a = get_int("> Enter number 1: ")
b = get_int("> Enter number 2: ")

print("Add:", add(a, b))
print("Subtract:", subtract(a, b))
print("Divide:", divide(a, b))
print("Multiply:", multiply(a, b))
