rows = int(input("Enter a number: ? "))
n1, n2 = 0, 1
i = 0
if rows <= 0:
   print("Please enter a positive integer")
elif rows == 1:
   print("Fibonacci sequence upto",rows,":")
   print(n1)
else:
   print("Fibonacci sequence:")
   while i < rows:
       print(n1)
       nth = n1 + n2
       n1 = n2
       n2 = nth
       i += 1