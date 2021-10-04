#github : https://github.com/arincantikam26

('=' * 25)
print('simple calculator')
print(' 1. addition\t\t[+]')
print(' 2. subtraction\t\t[-]')
print(' 3. multiplication\t[*]')
print(' 4. division\t\t[/]')
print('=' * 25)

    data = input('Choice operation(1/2/3/4): ')
    data_1 = eval(input('Input first number : '))
    data_2 = eval(input('Input second number : '))
    
    if data == '1':
        print('addition\t\t[+]\n')
        result = data_1 + data_2
        print(f'Result : {data_1} + {data_2} = {result}')
    elif data == '2':
        print('subtraction\t\t[-]\n')
        result = data_1 - data_2
        print(f'Result : {data_1} - {data_2} = {result}')
    elif data == '3':
        print('multiplication\t[*]\n')
        result = data_1 * data_2
        print(f'Result : {data_1} * {data_2} = {result}')
    elif data == '4':
        print('division\t\t[/]')
        result = data_1 / data_2
        print(f'Result : {data_1} / {data_2} = {result}')
    else :
        print('Invalid option')

    


    
    
