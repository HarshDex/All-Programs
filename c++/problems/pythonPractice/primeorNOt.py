#write a python program to find prime or not using maps
import math
def primeOrnot(n):
    
    for i in range (2,int(math.sqrt(n))):
        if(n%i == 0):
            return 'not prime'
            
        else:
            return 'prime'
            
            
x = [0,5,26,7,3,3,1,23,5,67,8]
res = list(map(primeOrnot,x))
print(res)