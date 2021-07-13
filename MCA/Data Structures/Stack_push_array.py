class Stack:
    def __init__(self, stack=[], lim=None):
        self._stack = stack
        self._lim = lim

    def push(self, data):
        if self._lim is not None and self._lim > len(self._stack):
            print("~~STACK OVERFLOW~~")
            return
        self._stack.append(int(data))

    def __str__(self):
        return str(self._stack)


if __name__ == '__main__':
    stack = Stack()

    print("1. Push to stack")
    print("2. Print stack")

    while True:
        if input("Your choice: ") == "1":
            stack.push(input(" Enter element: "))
        else:
            print(stack)
