import googlesearch

from googlesearch import search
response = input('What you want to search ?')
results=[]
stop = int(input('enter no. of results u want'))
for i in search(response, tld='com', lang='en', num=10, start=0, stop=stop):

	results.append(i)
    print(i)
