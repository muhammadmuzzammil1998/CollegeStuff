l = [12, 23, 34]
t = (1, 2, 3)

print("List:", l)
print("Tuple:", t)

new_list = [45, 56, 67]
new_tuple = (11, 12, 13)

l += list(new_tuple)
print("New list:", l)

t += tuple(new_list)
print("New tuple:", t)
