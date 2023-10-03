# "George"
# #'George'
# 'George'
# #'George'
# print("George")
# #George
# 'Red' 'Car'
# #'RedCar'
# 'Red' ' Car'
# #'Red Car'
# print('Red','Car')
# #Red Car
# print('Red','Car',123)
# #Red Car 123
# 'Red'+'Car'+123
# 'Red'+'Car'+str(123)
# 'RedCar123'
# #'I'm Fine'   wrong
# "I'm Fine"
# #"I'm Fine"
# 'I\'m Fine'
# #"I'm Fine"

# #String compare
# s1="Hello"
# s2="hello"
# if s1==s2:
#     print("Equal")
# else:
#   print("Not Equal")
# if s1<=s2:
#     print("s1 is smaller than or equal to s2")
# if s1>=s2:
#     print("s2 is smaller than s1")        

# s1="hello"

# print(s1.lower())
# print(s1.upper())
# print(s1)

# "If an object is immutable thats means the content of tht object will always be intact"
# s1='one'
# s2='two'
# s1=s2
# print(s1)

# #type conversion in python

# n1="123"
# i=int(n1)
# print(i)

# n2=123
# j=str(n2)
# print(j)

#string slicing


'''
    s[index]
    s[start,stop]
    s[start,stop,step]
'''
'''
String="String"
String[0]
String[2::]
String[::2]
String[:4:]

String[-4:-1]
String[-1:-4:-1]

#Repeating a string
print((String+'\n')*10)
print(123*10)
'''

#String length
# l=len(s)
# print(l)

#Removing space from string
name=' Shubham Bhatt '
print(name.rstrip())
print(name.lstrip())
print(name.strip()) #Remove both left and right
print(name)

#Find a substring
str=input("Enter main string: ")
subStr=input("Enter sub string: ")

n=str.find(subStr,0,len(str))

if n==-1:
    print("Substring not found")
else:
    print("Substring found at position",n)    