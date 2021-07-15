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


class Queue:
    def __init__(self, queue=LinkedList()):
        self._queue = queue

    def enqueue(self, data):
        self._queue.append(int(data))

    def __str__(self):
        return str(self._queue)


if __name__ == '__main__':
    queue = Queue()

    print("1. Enqueue element")
    print("2. Print queue")

    while True:
        if input("Your choice: ") == "1":
            queue.enqueue(input(" Enter element: "))
        else:
            print(queue)
