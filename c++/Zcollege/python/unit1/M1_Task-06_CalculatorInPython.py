def add(x,y):
    '''This function adds two variables a and b
    and returns the sum of a and b
    '''
    return x+y

def sub(x,y):
    '''This function substracts two variables a and b
    and returns the substraction of a and b
    '''
    return (x-y)

def mult(x,y):
    return x*y

def div(x,y):
    return x/y

def modulous(x,y):
    return x%y    

def expo(x,y):
    return x**y

def floordiv(x,y):
    return x//y   

def main():
    if add(1,2)==3:
        print("Add functionality is working fine!")
    if sub(3,2)==1:
        print("sub functionality is working fine!")
    if mult(1,2)==2:
        print("Add functionality is working fine!")
    if div(3,2)==1:
        print("sub functionality is working fine!") 
    if modulous(5,2)==1:
        print("Modulous functionality is working fine!")
    if expo(2,2)==4:
        print("expo functionality is working fine!")   
    if floordiv(5,2)==2:
        print("floordiv functionality is working fine!")  

if __name__=="__main__":
    main()

