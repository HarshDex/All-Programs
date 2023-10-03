#M1_Task-07_PrimeOrNotInPython

import math
#Method 1
def primeOrNot1(x):

    count =0
    y=int(x)
    for i in range(2,y-1):
        if y%i==0:
            count = count +1
    
    if count==0:
        return "Yes it is a prime number"
    else:
        return "Not a prime"
#x=7

x=input("Enter the value of x \n")
print(primeOrNot1(x))    

#Method 2

def primeOrNot2(x):

    count =0
    y=int(x)
    for i in range(2,y//2):
        if y%i==0:
            count = count +1
    
    if count==0:
        return "Yes it is a prime number"
    else:
        return "Not a prime"
#x=7

x=input("Enter the value of x \n")
print(primeOrNot2(x)) 


#Method 3

def primeOrNot3(x):

    count =0
    y = int(x)
    r= math.ceil(math.sqrt(y))
    for i in range(2,r+1):
        if y%i==0:
            count = count +1
    
    if count==0:
        return "Yes it is a prime number"
    else:
        return "Not a prime"
#x=7

x=input("Enter the value of x \n")
print(primeOrNot3(x))    


#Method 4
def sqrt1(x):
    i=1
    r=1
    while(r<x):
        r=i*i
        i=i+1

    return i-1    



def primeOrNot4(x):

    count =0
    y=int(x)
    r=sqrt1(y)
    for i in range(2,r+1):
        if y%i==0:
            count = count +1
    
    if count==0:
        return "4 Yes it is a prime number"
    else:
        return "Not a prime"
#x=7

x=input("Enter the value of x \n")
print(primeOrNot4(x))    

#while i<=5:
#    i=i+1