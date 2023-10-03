# class baseClass : 
#     def add(self,a,b):
#         return a+b

# obj = baseClass
# print(obj.add(obj,1,2))

# class man:
#     def __inti__(self,name,age):
#         self.name = name
#         self.age = age
#     def fun(self):
#         print('this function is used to display hello !!' , self.name)

# p1 = man('harsh',21)
# print(p1.name)
# print(p1.age)
# class Person:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
# p1 = Person("John", 36)
# print(p1.name)
# print(p1.age)

# class test:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age
#     def display(self):
#         print('name of the object : ' +  self.name)
#         print('age of the object : ' + self.age)

# name = input('enter your name : ')
# age =input('enter your age : ') 
# obj = test(name,age)
# obj.display()


# inheritance in python

class A:
    def display(self):
        print("hello world !!")
class B(A):
    def display1(self):
        print('hello world !!!!!')
b = B()
b.display()
b.display1()

# multiple inheritance

class base:
    def fun1(self):
     print('hello my mane is base')
class d(base):
    def fun2(self):
        print("hello my name is f2")
class multi(d):
    def fun3(self):
        print("hello world !!")
    
d1 = multi()
d1.fun1()
d1.fun2()
d1.fun3()