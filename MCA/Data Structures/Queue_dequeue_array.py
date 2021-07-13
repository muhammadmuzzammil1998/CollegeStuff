class Queue:
    def __init__(self, queue=[], lim=None):
        self._queue = queue
        self._lim = lim

    def enqueue(self, data):
        if self._lim is not None and self._lim > len(self._queue):
            print("~~QUEUE OVERFLOW~~")
            return
        self._queue.append(int(data))

    def dequeue(self):
        if len(self._queue) == 0:
            print("~~QUEUE UNDERFLOW~~")
            return None
        dequeued = self._queue[0]
        self._queue = self._queue[1:]
        return dequeued

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
