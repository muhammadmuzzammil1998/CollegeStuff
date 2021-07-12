def delete(array, data):
  count = 0
  found = False
  for el in array:
    if el == int(data):
      found = True
      array[count] = 0
      break
    count += 1

  if not found:
    print("  Element not found!!")
  else:
    print("  Element deleted!!")

def dump(array):
  for el in array:
    print(el, end=' ')
  print()

if __name__ == '__main__':
  array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
  print("Array: ", array)
  print("1. Delete from array")
  print("2. Print array")

  while True:
    if input("Your choice: ") == "1":
      delete(array, input(" Enter element: "))
    else:
      dump(array)