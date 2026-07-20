'''
# Node Class:
class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None
'''

class Solution:
    def __init__(self):
        # prev tracks the last processed node in inorder traversal
        self.prev = None
        # head will store the starting node of the DLL
        self.head = None

    def treeToDLL(self, root):
        if not root:
            return None
        
        # 1. Recurse on the left subtree
        self.treeToDLL(root.left)
        
        # 2. Process the current node (Root)
        if self.prev is None:
            # This is the leftmost node, make it the head
            self.head = root
        else:
            # Link current node with the previously processed node
            root.left = self.prev
            self.prev.right = root
            
        # Move prev to current node
        self.prev = root
        
        # 3. Recurse on the right subtree
        self.treeToDLL(root.right)
        
        return self.head