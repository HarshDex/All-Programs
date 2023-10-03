# Varibale is like a container
var1 = 123
var2 = 123.4
var3 = "Hello"

print(var1)
print(var2)
print(var3)

# Casting of a value
x = str(321)  # x will be "321"
y = int(3)    # y will be 3
z = float(3)  # z will be 3.0

print(x)
print(y)
print(z)


# Python string/character storage!
# double quote and single quote
x = "John"
x = 'John'
x = 'b'
x = "b"
x = """Akash"""
x = '''Akash'''

print(x)

# type of varaible
var1 = 123
var2 = 123.4
var3 = "46"

print(type(var1))
print(type(var2))
print(type(var3))

print(var1 + var2)
# print(var2 + var3) #Error, can not add string with integer
print(str(var2) + var3)
print(var2 + int(var3))

print("Hello world\n" * 10)
print(10*5)

#How about an integer
print(10 * ("\n"+str(var1 + var2)))

#Take input from the user
print("Enter the value of a")
a = input()
b = input("Value of b ")
#print(a+10)    #Error
print(int(a)+10)

'''
Data Types:
1- Numeric:
   int
   float
2- Binary, Octal and Hexadecimal
   n1 = 0B0101010 # [0B for Binary{0,1}]
   n2 = 0O17      # [0O for octal{0,1,2,3,4,5,6,7}]
   n3 = 0X1c2     # [0X for hexadecimal{0-9,A,B,C,D,E,F}]
3- Bool data type:
   a  = 10
   b  = 20
   if(a<b): print("Hello") 
'''

n1 = 0B0101010
n2 = 0O17
n3 = 0X1c2

print(int(n1))
print(int(n2))
print(int(n3))

print(int('0101010',2))
print(int('17',8))
print(int('1c2',16))

# Bool data type
a  = 10
b  = 20
c  = a<b 
if(c): print("Hello") 

a = 5>10
print(a)