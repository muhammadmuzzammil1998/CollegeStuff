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

    def search(self, data):
        count = 1
        found = False
        current = self.head
        while current.next != None:
            if current.data == int(data):
                found = True
                break
            count += 1

            current = current.next

        return found, count

    def __str__(self):
        current = self.head
        traversal = "[ "
        while current != None:
            traversal += str(current) + " -> "
            current = current.next
        return traversal + "Null ]"


if __name__ == '__main__':
    ll = LinkedList()
    ll.append(8).append(4).append(35).append(42).append(
        65).append(63).append(77).append(38).append(49)
    print("Linked List:", ll)
    print("1. Search in LinkedList")
    print("2. Traverse LinkedList")

    while True:
        if input("Your choice: ") == "1":
            found, position = ll.search(input(" Enter element: "))
            if not found:
                print("  Element not found!!")
            else:
                print("  Element found at position: {}".format(position))
        else:
            print(ll)
