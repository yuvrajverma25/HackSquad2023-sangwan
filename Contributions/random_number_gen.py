"Generates random number between given two limits!"

#imports
import random

print('Random Number Generator')

#Taking users limits under which numbers should be generated
min = int(input('Please input the minimum limit (integer): '))
max = int(input('Please input the maximum limit (integer): '))

#Generate a random number
number = random.randint( min, max)

#Printing the random number generated
print('Your random number is: {}'.format(number))
