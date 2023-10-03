#functions in pyython

def my_function():
    print("Hello from a function")
print("Out of the function")    

my_function()

#Functions with parameters (python does not allow "int+string")
def my_function(fname):
    print(fname+" Refrence")

my_function("Email")
my_function("Password")
my_function("123")
# my_function(1)            #error
# my_function(1.2)          #error

def my_function(fname,lname):
    print(fname +  ' ' + lname)    

my_function("Email","Password")
#my_function(123,123.5)            error

#Arbitrary argument ,*args
def my_function(*kids):      #this is used to pass unknown number of arguments
    print("The youngest child is "+kids[2])
my_function("Ravi","Sumit","Amit")


#keyword arguments (we should not have to remember the sequence of the data to be send)
def my_function(child3,child2,child1):
    print("The youngest child is "+child3)

my_function(child1="Emi",child2="putin",child3="Biden")
#my_function("EMi","putin","biden")


#default parameter
def my_function(country="norway"):
    print("I am from "+country)

my_function("sweden")
my_function("India")
my_function()
my_function("Brazil")

#passing a list to an argument
def my_function(food):
    for i in food:
        print(i)

fruits=["apple","banana","cherry",1222,1442]
my_function(fruits)

#return values
def my_function(x):
    return 5*x

print(my_function(3))
print(my_function(5))
print(my_function(9.2))

# Pass function
def my_function():
  pass

my_function()



