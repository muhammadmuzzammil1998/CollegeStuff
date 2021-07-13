class LinkedList:
    class Node:
        def __init__(self, data):
            self.data = data
            self.next = None

        def __str__(self):
            return str(self.data)

    def __init__(self):
        self.head = None

    def append(self, data):
        if self.head == None:
            self.head = self.Node(data)
            return self

        current = self.head
        while current.next != None:
            current = current.next

        node = self.Node(data)
        current.next = node
        return self

    def __str__(self):
        current = self.head
        traversal = "[ "
        while current != None:
            traversal += str(current) + " "
            current = current.next
        return traversal + "]"


class Stack:
    def __init__(self, stack=LinkedList(), lim=None):
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
