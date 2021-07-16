def insert(array, data):
    array.append(data)


if __name__ == '__main__':
    array = []
    print("1. Add to array")
    print("2. Print array")

    while True:
        if input("Your choice: ") == "1":
            insert(array, int(input(" Enter element: ")))
        else:
            print("Array:", array)
