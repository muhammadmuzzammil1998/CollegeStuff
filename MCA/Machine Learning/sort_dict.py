dict = {
    3: 4889,
    5: 1041,
    1: 1337,
    4: 6721,
    2: 5465
}

print(sorted(dict.items(),
             key=lambda pair: (pair[0], pair[1])))
print(sorted(dict.items(),
             key=lambda pair: (pair[1], pair[0])))
