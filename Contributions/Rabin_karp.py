import time
import random
def decorator(func):
    def inner(*args,**kwargs):
        start = time.time()
        func(*args,**kwargs)
        end= time.time()
        print("time taken is",end-start)

    return inner

@decorator
def brute_force(s,pattern):
    for i in range(len(s)-len(pattern)):
        if s[i:i+len(pattern)]==pattern:
            # pass
            print("MATCH")


@decorator
def without_hashing(s,pattern):
    b=1
    p=0
    t=0
    for i in range(len(pattern)):
        p=p*2 + int(pattern[i])
        t=t*2 + int(s[i])

        b=b*2

    # print("p initial is",p)
    # print("t initial is",t)
    

    for i in range(len(pattern),len(s)):
        # print(s[i-len(pattern):i])
        # print("p is ",p)
        # print("t is ",t)
        if p==t: 
            print("MATCH")
            # pass

        t=t*2 + int(s[i])-int(s[i-len(pattern)])*b

    if p==t: 
        # pass
        # print(p,t)
        print("MATCH")
# def brute_force()
@decorator
def with_hashing(s,pattern):
    b=1
    p=0
    t=0
    q=31#prime
    for i in range(len(pattern)):
        p=(p*2 + int(pattern[i]))%q
        t=(t*2 + int(s[i]))%q

        b=(b*2)%q
        # print("p in initial loop is",p)
    

    for i in range(len(pattern),len(s)):
        # print(s[i-len(pattern):i])
        # print("p is ",p)
        # print("t is ",t)

        if p==t: 
            if (s[i-len(pattern):i]==pattern):
                # pass
                print("MATCH")
        t=(t*2 + int(s[i])-int(s[i-len(pattern)])*b)%q

    if p==t: 
        if (s[i-len(pattern)+1:i+1]==pattern):
            print("MATCH")
            # pass
if __name__=="__main__":
    # s=input("enter a string of 1s and 0s")
    # pattern=input("enter pattern")
    s=pattern=""
    for i in range(1000000):
        s+=str(random.randint(0,1))
    for i in range(100000):
        pattern+=str(random.randint(0,1))
    # pattern ="1010001"
    # print(s)
    print("bruteforce")
    brute_force(s,pattern)
    print("###########################")
    print("without hashing")
    without_hashing(s,pattern)
    print("###########################")
    print("with hashing")
    with_hashing(s,pattern)