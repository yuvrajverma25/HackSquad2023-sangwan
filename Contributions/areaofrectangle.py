import sys

length = input('Enter length: ')
breadth = input('\nEnter Breadth: ')

if length == breadth:
    print('This is not a rectangle. This is a square.')
    print('\nExiting ...')
    sys.exit(1)

def aot():
    area = int(length)*int(breadth)
    print(area)

aot()
