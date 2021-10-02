a=int(input("enter a year:"))
if(a%4==0):
    print("{0} is a leap year".format(a))
elif(a%400==0):
    print("{0} is a leaf year".format(a))
else:
    print("{0} is not a leap year".format(a))
