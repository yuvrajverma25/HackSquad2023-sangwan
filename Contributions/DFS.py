class graph:
            def __init__(self):
                        self.graph={}
                        self.visited=set()
            def dfs(self,node):
                        if node not in self.visited:
                                    print(node)
                                    self.visited.add(node)
                                    for neighbour in self.graph [node]:
                                                self.dfs(neighbour)
                                                
            def graph_input(self,n):
                        for i in range(1,n+1):

                                    self.graph.update({i:None})
                                    element=[ ]
                                    choice='y'
                                    while choice=='y':
                                                x=int(input("Enter the edge for vertex %d: "%i))
                                                element.append(x)
                                                self.graph[i]=element
                                                choice=input("Do you want to add more edges? (y/n):")
                        
n=int(input("enter total number of nodes: "))
root=int(input("Enter source node:"))
g=graph()
g.graph_input(n)
g.dfs(root)
