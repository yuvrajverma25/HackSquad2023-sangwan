vowels = ['a','e','i','o','u']
string = input()

count = 0
for char in string:
    if char not in vowels:
        count += 1
        
print(count)
