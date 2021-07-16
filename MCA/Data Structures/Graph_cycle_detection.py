from collections import defaultdict


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

    def vertices(self):
        return self._vertices

    def edges(self):
        return self._edges

    def has_cycle(self):
        visited = defaultdict(bool)
        found = False
        for i in self._edges:
            if visited[i[0]] and visited[i[1]] == True:
                found = True
                break

            visited[i[1]] = True

        return found

    def __str__(self):
        traversal = ""
        for i in self._edges:
            vertex_from = self._vertices[i[0]]
            vertex_to = self._vertices[i[1]]
            traversal += str(vertex_from) + " -> " + str(vertex_to) + "\n"
        return traversal


def read_int(x): return int(input(x))


if __name__ == '__main__':
    vertices = ["A", "B", "C", "D"]
    edges = [[0, 1], [1, 2], [2, 3]]
    g = Graph(vertices, edges)

    print("1. Add node to graph")
    print("2. Create adjacency")
    print("3. Print adjacencies")
    print("4. Detect cycle")

    while True:
        print("Vertices:", g.vertices())
        print("Edges", g.edges())
        inp = read_int("> Your choice: ")

        if inp == 1:
            g.add_node(read_int("> Enter node: "))
        elif inp == 2:
            g.create_adj([read_int("> Enter edge from: "),
                          read_int("> Enter edge to: ")])
        elif inp == 3:
            print(g)
        else:
            if g.has_cycle():
                print("> The graph has cycles.")
            else:
                print("> The graph does not have cycles.")
