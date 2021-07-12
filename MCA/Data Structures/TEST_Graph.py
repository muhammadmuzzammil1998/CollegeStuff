class Graph:
    def __init__(self, vertices=[], edges=[]):
        self.vertices = vertices
        self.edges = edges

    def add_vertex(self, *vertices):
        for vertex in vertices:
            self.vertices.append(vertex)

    def add_edge(self, *edges):
        for edge in edges:
            self.edges.append(edge)

    def print(self):
        for i in self.edges:
            vertex_from = self.vertices[i[0]]
            vertex_to = self.vertices[i[1]]
            print(vertex_from, " -> ", vertex_to)


if __name__ == '__main__':
    g = Graph()
    g.add_vertex(34, 23, 12, 56)
    g.add_edge([0, 1], [1, 2], [3, 1])

    g.print()
