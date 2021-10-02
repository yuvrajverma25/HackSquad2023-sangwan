import sys
sys.setrecursionlimit(10**8)

def isSafe(i, j, board) :
    
    for a in range(9) :
        if board[i][j] == board[a][j] and a != i : return False
        
    for a in range(9) :
        if board[i][j] == board[i][a] and a != j : return False
    
    a = 6
    if i < 6 : a = 3
    if i < 3 : a = 0
    
    b = 6
    if j < 6 : b = 3
    if j < 3 : b = 0
        
    for k in range(a, a+3) :
        for l in range(b, b+3) :
            if board[i][j] == board[k][l] and k != i and l !=j : return False
        
    return True
        
        
def isSolvable(i, j, board):
    #Implement Your Code Here
    
    if board[i][j] == 0 : 
        for val in range(1, 10) :
            board[i][j] = val
            if isSafe(i, j, board) :
                if j < 8 :
                    if isSolvable(i, j+1, board) : return True
                else :
                    if i == 8 : return True
                    if isSolvable(i+1, 0, board) : return True
        board[i][j] = 0
    else :
        if isSafe(i, j, board) : 
            if j < 8 :
                if isSolvable(i, j+1, board) : return True
            else :
                if i == 8 : return True
                if isSolvable(i+1, 0, board) : return True
    
    return False    
    

board = [[ int(ele) for ele in input().split() ]for i in range(9)]
ans = isSolvable(0, 0, board)
if ans is True:
    print('true')
else:
    print('false')
