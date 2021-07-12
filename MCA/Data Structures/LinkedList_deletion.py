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
                return self

            current = current.next

        return self

    def __str__(self):
        current = self.head
        traversal = "[ "
        while current != None:
            traversal += str(current) + " -> "
            current = current.next
        return traversal + "Null ]"


if __name__ == '__main__':
    ll = LinkedList()
    ll.append(1).append(2).append(3).append(4).append(
        5).append(6).append(7).append(8).append(9)
    print("Linked List:", ll)
    print("1. Delete from LinkedList")
    print("2. Traverse LinkedList")

    while True:
        if input("Your choice: ") == "1":
            ll.remove(input(" Enter element: "))
        else:
            print(ll)
