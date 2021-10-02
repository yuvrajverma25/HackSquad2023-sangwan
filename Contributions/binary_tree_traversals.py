# All traversals in one: Pre, post and inorder
# Time complexity: O(3n)
# Space complexity: O(4n), 4 stacks are being used

class Node():
    def __init__(self, key):
        self.left = None
        self.value = key
        self.right = None
        
def traversal(node):
    if node is None:
        return []
    
    stack = [[node, 1]]
    preorder = []
    inorder = []
    postorder = []
    
    while(len(stack)!=0):
        curr = stack[-1][0]

        if(stack[-1][1] == 1):
            preorder.append(curr.value)
            stack[-1][1] += 1
            if(curr.left):
                stack.append([curr.left, 1])

        if(stack[-1][1] == 2):
            inorder.append(curr.value)
            stack[-1][1] += 1
            if(curr.right):
                stack.append([curr.right, 1])
        
        if(stack[-1][1] == 3):
            postorder.append(curr.value)
            stack.pop()
            
    return(preorder, inorder, postorder)
    
root = Node(1)
root.left = Node(2)
root.right = Node(7)
root.left.left = Node(3)
root.left.left.right = Node(4)
root.left.left.right.right = Node(5)
root.left.left.right.right.right = Node(6)
root.right.left = Node(8)
root.right.right = Node(9)
root.right.right.right = Node(10)

preorder, inorder, postorder = traversal(root)
print('Inorder traversal:', inorder)
print('Preorder traversal:', preorder)
print('Postorder traversal:', postorder)
