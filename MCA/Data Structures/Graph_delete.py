class Graph:
    def __init__(self, vertices=[], edges=[]):
        self._vertices = vertices
        self._edges = edges

    def delete_node(self, data):
        if not data in self._vertices:
            return

        vertex_index = None
        for i, _ in enumerate(self._vertices):
            if self._vertices[i] == data:
                self._vertices.remove(data)
                vertex_index = i
                break

        edges_indices = []
        adjustment_factor = 0
        for i, _ in enumerate(self._edges):
            if self._edges[i][0] == vertex_index or self._edges[i][1] == vertex_index:
                edges_indices.append(i)
            if self._edges[i][0] > vertex_index:
                self._edges[i][0] -= 1
            if self._edges[i][1] > vertex_index:
                self._edges[i][1] -= 1

        if edges_indices == []:
            return

        for index in edges_indices:
            # Adjustment factor because the list is updating as we pop
            self._edges.pop(index+adjustment_factor)
            adjustment_factor -= 1

    def vertices(self):
        return self._vertices

    def edges(self):
        return self._edges

    def __str__(self):
        traversal = ""
        for i in self._edges:
            vertex_from = self._vertices[i[0]]
            vertex_to = self._vertices[i[1]]
            traversal += str(vertex_from) + " -> " + str(vertex_to) + "\n"
        return traversal


def read_int(prompt):
    return int(input(prompt))


if __name__ == '__main__':
    vertices = [0, 1, 2, 3, 4]
    edges = [[0, 1], [0, 4], [1, 2], [1, 4], [1, 3], [4, 3]]
    g = Graph(vertices, edges)

    print("1. Delete node from graph")
    print("2. Print adjacencies")

    while True:
        print("Vertices:", g.vertices())
        print("Edges", g.edges())
        if read_int("Your choice: ") == 1:
            g.delete_node(read_int("Enter node index: "))
        else:
            print(g)
