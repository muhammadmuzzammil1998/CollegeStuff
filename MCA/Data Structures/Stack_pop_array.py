class Stack:
    def __init__(self, stack=[], lim=None):
        self._stack = stack
        self._lim = lim

    def push(self, data):
        if self._lim is not None and len(self._stack) == self._lim:
            print("~~STACK OVERFLOW~~")
            return
        self._stack.append(int(data))

    def pop(self):
        if len(self._stack) == 0:
            print("~~STACK UNDERFLOW~~")
            return None
        return self._stack.pop()

    def __str__(self):
        return str(self._stack)


if __name__ == '__main__':
    stack = Stack(lim=10)

    print("1. Push to stack")
    print("2. Pop stack")
    print("3. Print stack")

    while True:
        inp = input("Your choice: ")
        if inp == "1":
            stack.push(input(" Enter element: "))
        elif inp == "2":
            print(" Element removed:", stack.pop())
        else:
            print(stack)
