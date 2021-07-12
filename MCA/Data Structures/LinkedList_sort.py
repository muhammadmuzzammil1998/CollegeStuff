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

    def sort(self):
        current = self.head

        while current.next != None:
            next_current = current.next

            while next_current != None:
                if next_current.data < current.data:
                    current_data = current.data
                    current.data = next_current.data
                    next_current.data = current_data

                next_current = next_current.next

            current = current.next

    def __str__(self):
        current = self.head
        traversal = "[ "
        while current != None:
            traversal += str(current) + " -> "
            current = current.next
        return traversal + "Null ]"


if __name__ == '__main__':
    ll = LinkedList()
    print("1. Add to LinkedList")
    print("2. Sort array")

    while True:
        print("LinkedList: ", ll)
        if input("Your choice: ") == "1":
            ll.append(input(" Enter element: "))
        else:
            ll.sort()
