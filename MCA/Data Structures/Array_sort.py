def sort(array):
    length = len(array)
    for i in range(length - 1):
        for j in range(0, length - i - 1):
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]
    return array


def insert(array, data):
    array.append(data)


def dump(array):
    for el in array:
        print(el, end=' ')
    print()


if __name__ == '__main__':
    array = []
    print("Array: ", array)
    print("1. Enter array")
    print("2. Sort array")

    while True:
        print("Array: ", array)
        inp = input("Your choice: ")
        if inp == "1":
            insert(array, input(" Enter element: "))
        elif inp == "2":
            array = sort(array)
