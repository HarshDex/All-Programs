# With method object
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def myfunc(self):
        print("Hello my name is "+ self.name)

p1 = Person("John",36)
p1.myfunc()

# Delete
del p1.age # instance variable
print(p1.age)

del p1
print(p1.name)