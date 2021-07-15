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

    def remove(self, data):
        if self.head == None:
            return self

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
    def

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

    def dequeue(self):
        # if self._stack.peek() is None:
        #     print("~~STACK UNDERFLOW~~")
        #     return None
        # return self._stack.remove()

        # if len(self._queue) == 0:
        #     print("~~QUEUE UNDERFLOW~~")
        #     return None
        # dequeued = self._queue[0]
        # self._queue = self._queue[1:]
        # return dequeued
        return self._queue.data

    def __str__(self):
        return str(self._queue)


if __name__ == '__main__':
    queue = Queue()

    print("1. Enqueue element")
    print("2. Dequeue element")
    print("3. Print queue")

    while True:
        inp = input("Your choice: ")
        if inp == "1":
            queue.enqueue(input(" Enter element: "))
        elif inp == "2":
            print(" Element removed:", queue.dequeue())
        else:
            print(queue)
