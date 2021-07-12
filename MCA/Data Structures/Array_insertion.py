def insert(array, data):
    array.append(data)


def dump(array):
    for el in array:
        print(el, end=' ')
    print()


if __name__ == '__main__':
    array = []
    print("1. Add to array")
    print("2. Print array")

    while True:
        if input("Your choice: ") == "1":
            insert(array, input(" Enter element: "))
        else:
            dump(array)
