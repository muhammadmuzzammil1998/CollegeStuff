list = [12, 23, 34, 45, 56, 67]
print("Old list:", list)

last = len(list) - 1
list[0], list[last] = list[last], list[0]
print("New list:", list)
