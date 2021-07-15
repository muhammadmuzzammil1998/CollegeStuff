class BinarySearchTree:
    class Node:
        def __init__(self, data):
            self.left = None
            self.data = data
            self.right = None

    def __init__(self):
        self._root = None

    def add(self, data):
        if self._root is None:
            self._root = self.Node(data)
            return self
        self._add(data, self._root)
        return self

    def _add(self, data, node):
        if data < node.data:
            if node.left is not None:
                self._add(data, node.left)
            else:
                node.left = self.Node(data)
            return
        if node.right is not None:
            self._add(data, node.right)
        else:
            node.right = self.Node(data)

    def traverse(self, func):
        return func(self._root)

    def inorder(self, node):
        traversal = []
        if node is not None:
            traversal += self.inorder(node.left)
            traversal += [node.data]
            traversal += self.inorder(node.right)
        return traversal

    def preorder(self, node):
        traversal = []
        if node is not None:
            traversal += [node.data]
            traversal += self.preorder(node.left)
            traversal += self.preorder(node.right)
        return traversal

    def postorder(self, node):
        traversal = []
        if node is not None:
            traversal += self.postorder(node.left)
            traversal += self.postorder(node.right)
            traversal += [node.data]
        return traversal


if __name__ == '__main__':
    tree = BinarySearchTree()
    tree.add(33).add(42).add(41).add(14).add(12)

    print("Inorder:", tree.traverse(tree.inorder))
    print("Preorder:", tree.traverse(tree.preorder))
    print("Postorder:", tree.traverse(tree.postorder))
