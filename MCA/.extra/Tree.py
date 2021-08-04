class Tree:
    class Node:
        def __init__(self, data):
            self.left = None
            self.data = data
            self.right = None

        def __str__(self):
            return str(self.data)

        def is_leaf(self):
            return self.left == None and self.right == None

        # def add(self, data):
        #     if self.data == data:
        #         return
        #     if data < self.data:
        #         if self.left is None:
        #             self.left = self(data)
        #         else:
        #             self.left.add(data)
        #     # if data < self.data:
        #     #     if self.left is None:
        #     #         self.left = self.add(data)
        #     #     else:
        #     #         self.left.add(data)
        #     # elif data > self.data:
        #     #     if self.right is None:
            #         self.right = self.add(data)
            #     else:
            #         self.right.add(data)
            # else:
            #     self.data = data

    def __init__(self):
        self.root = None

    def add(self, data):
        if self.root is None:
            self.root = self.Node(data)
            return
        self.add_node(data, self.root)

    def add_node(self, data, node):
        if node.is_leaf():
            node = self.Node(data)
        else:
            if node.left:
                self.add_node(data, node.left)
            elif node.left.data

    def traverse(self, func=None):
        if func is None:
            func = self.inorder
        return func(self.root)

    def inorder(self, node):
        traversal = []
        if node:
            traversal = traversal + self.inorder(node.left)
            traversal.append(node.data)
            traversal = traversal + self.inorder(node.right)
        return traversal


if __name__ == '__main__':
    t = Tree()
    t.add(10)
    t.add(4)
    t.add(15)
    print(t.traverse())
