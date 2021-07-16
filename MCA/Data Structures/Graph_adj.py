class Graph:
    def __init__(self, vertices=[], edges=[]):
        self._vertices = vertices
        self._edges = edges

    def add_node(self, *vertices):
        for vertex in vertices:
            self._vertices.append(vertex)

    def create_adj(self, *edges):
        for edge in edges:
            self._edges.append(edge)

    def vertices(self): return self._vertices
    def edges(self): return self._edges

    def __str__(self):
        traversal = ""
        for i in self._edges:
            vertex_from = self._vertices[i[0]]
            vertex_to = self._vertices[i[1]]
            traversal += str(vertex_from) + " <-> " + str(vertex_to) + "\n"
        return traversal


def read_int(prompt):
    return int(input(prompt))


if __name__ == '__main__':
    g = Graph()

    print("1. Add node to graph")
    print("2. Create adjacency")
    print("3. Print adjacencies")

    while True:
        print("Vertices:", g.vertices())
        print("Edges", g.edges())
        inp = read_int("Your choice: ")
        if inp == 1:
            g.add_node(input(" Enter node: "))
        elif inp == 2:
            g.create_adj([read_int(" Enter edge from: "),
                          read_int(" Enter edge to: ")])
        else:
            print(g)
