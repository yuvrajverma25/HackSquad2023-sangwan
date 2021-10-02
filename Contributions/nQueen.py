
def isPoss(i, j, matrix) :
    
    for k in range(i) :
        if matrix[k][j] == 1 : return False
    for l in range(j) :
        if matrix[i][l] == 1 : return False
    
    k, l = i-1, j-1
    while k>=0 and l>=0 : 
        if matrix[k][l] == 1 : return False
        k, l = k-1, l-1
        
    k, l = i-1, j+1
    while k>=0 and l<len(matrix) :
        if matrix[k][l] == 1 : return False
        k, l = k-1, l+1
    
    return True
    
def nQueen(i, j, n, solution):
    #Implement Your Code Here
    if i >= n or j >= n : return
    
    if not isPoss(i, j, solution) : return
    
    if i == n-1 : 
        solution[i][j] = 1
        for sol in solution : print(*sol, end=" ")
        print()
        solution[i][j] = 0
        
        return
    
    for k in range(n) :
        solution[i][j] = 1
        nQueen(i+1, k, n, solution)
        solution[i][j] = 0

n = int(input())
solution = [[0 for i in range(n)] for j in range(n)]
for j in range(n) :
    nQueen(0, j, n, solution)
