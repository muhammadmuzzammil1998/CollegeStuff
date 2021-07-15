class LinkedList:
    class Node:
        def __init__(self, data):
            self.data = data
            self.next = None

        def __str__(self):
            return str(self.data)

    def __init__(self):
        self.head = None

    def appendAfter(self, data, after):
        if self.head == None:
            self.head = self.Node(data)
            return self

        current = self.head
        while current.next != None:
            current = current.next
            if current.data == after.data:
                break

        node = self.Node(data)
        node.next = current
        current = node
        return self

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
            traversal += str(current) + " -> "
            current = current.next
        return traversal + "Null ]"


class Graph:
    def __init__(self, vertices=None):
        if vertices is None:
            vertices = []
        self._vertices = vertices

    def add(self, vertex):
        self._vertices.append([vertex, LinkedList()])
        return self

    def create_adj(self, v_from, *v_to):
        count = 0
        for v in self._vertices:
            if self._vertices[count][0] == v_from:
                for i in v_to:
                    self._vertices[count][1].append(i)
                break
            count += 1
        return self

    def __str__(self):
        traversal = ""
        for v in self._vertices:
            traversal += "| " + str(v[0]) + " |=> " + str(v[1]) + "\n"
        return traversal


if __name__ == '__main__':
    g = Graph()
    g.add(0).add(1).add(2).add(3).add(4)
    g.create_adj(0, 1, 2)
    g.create_adj(1, 2, 4)
    g.create_adj(2, 3, 4, 1)
    g.create_adj(3, 4, 0)
    g.create_adj(4, 1, 2, 3, 0)

    print(g)
