class Matrix:
    def __init__(self, matrix):
        self._M = matrix
        self._rows = len(self._M)
        self._columns = len(self._M[0])

    def _eq_dimension(self, other):
        return self._columns == other._columns \
            or self._rows == other._rows

    def __str__(self):
        output = ""
        for row in self._M:
            output += "\t" + str(row) + "\n"

        return output

    def __add__(self, other):
        if not self._eq_dimension(other):
            return
        C = [[None for x in range(self._columns)]
             for y in range(self._rows)]

        for row in range(self._rows):
            for column in range(self._columns):
                C[row][column] = self._M[row][column]
                + other._M[row][column]

        return Matrix(C)

    def __sub__(self, other):
        if not self._eq_dimension(other):
            return
        C = [[None for x in range(self._columns)]
             for y in range(self._rows)]

        for row in range(self._rows):
            for column in range(self._columns):
                C[row][column] = self._M[row][column]
                - other._M[row][column]

        return Matrix(C)


A = Matrix([
    [3, 5, 6],
    [2, 5, 2],
    [6, 4, 8]
])

B = Matrix([
    [2, 3, 2],
    [2, 4, 1],
    [2, 1, 1]
])

print("A =", A)
print("B =", B)


C = A + B
print("A + B", C)

D = A - B
print("A - B", D)
