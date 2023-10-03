#Arithmetic Operator
'''
Addition [+]
Subtraction [-]
Multiplication [*]
Division[/]
Modulous [%]
Exponntiation [**]
Floor division [//]
'''

val1=2
val2=3

res = val1+val2
print(res)

res=val1-val2
print(res)

res=val1 * val2
print(res)

res= val1/val2
print(res)

#Modulous Operator
res= val1 % val2
print(res)

#Exponentiation Operator
# raise the first operand to power of second
res=val1 ** val2
print(res) #2^3

#Floor division
res =val1//val2
print(res) #0 not .66


#Expression

#Constant Expression:
x=15+1.3
print(x)

#Arithmetuc Expressions:
x=40
y=12
add=x+y
print(add)

#Integral Expressions:
a=13
b=12.0
c=a+int(b)
print(c)

#Floating Expressions
a=15
b=5
c=a/b
print("a/b",c)

#Relational Expressions
a=21
b=13
c=40
d=37

# >=,<=,>,<,!=,== -> True/False
p=(a+b)>=(c-d)
print(p)    #True

#Logical Expressions
P=(10==9)
Q=(7>5)

R= P and Q
S= P or Q
T= not P

print(R)
print(S)
print(T)