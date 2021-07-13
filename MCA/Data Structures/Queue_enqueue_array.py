class Queue:
    def __init__(self, queue=[], lim=None):
        self._queue = queue
        self._lim = lim

    def enqueue(self, data):
        if self._lim is not None and self._lim > len(self._queue):
            raise ValueError("Queue overflow.")
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
