
import sys

class Graph :
    
    def __init__(self, vertices) :
        self.vertices = vertices
        self.adjMatrix = [[False for i in range(vertices)] for j in range(vertices)]
    
    def addEdge(self, v1, v2, wgt) :
        self.adjMatrix[v1][v2] = self.adjMatrix[v2][v1] = wgt
        
    def _getMinIndex(self, visited, weight) :
        
        min_index = None
        for i in range(self.vertices) :
            if not visited[i] : 
                if min_index is None : min_index = i
                elif weight[min_index] > weight[i] : min_index = i
        
        return min_index
    
    def _printMST(self, parent, weight) :
        for i in range(1, self.vertices) : print(min(i, parent[i]), max(i, parent[i]), weight[i])
        
    def buildMST(self) :
        
        parent, visited = [None for _ in range(self.vertices)], [False for _ in range(self.vertices)]
        weight = [sys.maxsize for _ in range(self.vertices)]
        
        parent[0], weight[0] = -1, 0
        
        for i in range(self.vertices-1) :
            min_index = self._getMinIndex(visited, weight)
            visited[min_index] = True
            
            for j in range(self.vertices) :
                if not visited[j] and self.adjMatrix[min_index][j] :
                    if self.adjMatrix[min_index][j] < weight[j] :
                        parent[j] = min_index
                        weight[j] = self.adjMatrix[min_index][j]
        
        self._printMST(parent, weight)

        
v, e = map(int, input().split())

graph = Graph(v)
for _ in range(e) : 
    v1, v2, wgt = map(int, input().split())
    graph.addEdge(v1, v2, wgt)
graph.buildMST()
