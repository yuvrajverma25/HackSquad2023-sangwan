num = int(input("enter a number"))
min= int(input("give the minimum of range"))
max= int(input("give the maximum of range"))

if(min>max):
    print("range is not valid as min should be less than max")
    exit()
    
for i in range(min,max+1):
    if(num%i==0):
        print(i ,"is a divisor of", num)
    else:
        print(i,"is not a divisor of",num)
