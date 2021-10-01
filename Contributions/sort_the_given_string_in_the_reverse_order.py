inputstring = input()
# printing original string 
print("The original string : " + str(inputstring))

# using join() + sorted() + reverse
# Sorting a string 
result = ''.join(sorted(inputstring, reverse = True))
      
# print result
print("String after reverse sorting : " + str(result))