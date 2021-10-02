
class Edge : 
    
    def __init__(self, src, dest, wgt) :
        self.src = src
        self.dest = dest
        self.wgt = wgt
    
    def __str__(self) :
        if self.src < self.dest : return '{self.src} {self.dest} {self.wgt}'.format(self=self)
        return '{self.dest} {self.src} {self.wgt}'.format(self=self)
    

def findMST(arr, e) :
    
    arr.sort(key=lambda x: x.wgt)
    parentArr = [x for x in range(e)]
    
    count, ans, i = 0, [], 0
    while i < e :
        
        currSrc, currDest = arr[i].src, arr[i].dest
        srcTopmost, destTopmost = parentArr[currSrc], parentArr[currDest]
        
        while srcTopmost != currSrc :
            currSrc = srcTopmost
            srcTopmost = parentArr[currSrc]
            
        while destTopmost != currDest :
            currDest = destTopmost
            destTopmost = parentArr[currDest]
        
        if srcTopmost != destTopmost :
            ans.append(arr[i])
            count += 1
            parentArr[srcTopmost] = destTopmost
        
        i += 1
        
    return ans   
    
    
v, e = map(int, input().split())

arr = []
for _ in range(e) :    
    src, dest, wgt = map(int, input().split())
    arr.append(Edge(src, dest, wgt))

ans = findMST(arr, e)
for edge in ans : print(edge)
