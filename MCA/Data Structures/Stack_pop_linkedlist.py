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

    def remove(self, data=None):
        if self.head == None:
            return self

        if data is None:
            data = self.peek()

        if self.head.data == data:
            self.head = self.head.next
            return self

        current = self.head
        while (current.next != None):
            if current.next.data == int(data):
                current.next = current.next.next
                return data

            current = current.next

        return None

    def peek(self):
        if self.head == None:
            return None

        peek_value = self.head.data

        if self.head.next == None:
            self.head = None
            return peek_value

        current = self.head
        while (current.next != None):
            current = current.next
            peek_value = current.data

        return peek_value

    def __str__(self):
        current = self.head
        traversal = "[ "
        while current != None:
            traversal += str(current) + " "
            current = current.next
        return traversal + "]"


class Stack:
    def __init__(self, stack=LinkedList()):
        self._stack = stack

    def push(self, data):
        self._stack.append(int(data))

    def pop(self):
        if self._stack.peek() is None:
            print("~~STACK UNDERFLOW~~")
            return None
        return self._stack.remove()

    def __str__(self):
        return str(self._stack)


if __name__ == '__main__':
    stack = Stack()

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
