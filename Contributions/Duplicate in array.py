def MissingNumber(arr):
    # Please add your code here
    n = len(arr)
    sum_of_arr = sum(arr)
    sum_by_formula = (n-2)*(n-1)//2
    ans = sum_of_arr - sum_by_formula
    return ans

# Main
n=int(input())
arr=list(int(i) for i in input().strip().split(' '))
ans=MissingNumber(arr)
print(ans)
