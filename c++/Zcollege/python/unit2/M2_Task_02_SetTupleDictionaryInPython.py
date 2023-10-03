'''
1. Tuple
2. Sets
3. Difference between list and tuple
4. Dictionary
    -adding and removing keys
    -accessing values
    -Replacing Dictionaries
    -Traversing Dictionaries
'''

# 2. Tuple in python
'''
    -Unchangeable [Immutable]
    -Tuple items are ordered*
    -Allow duplicate values.
    -Use () to create tuple instead of []
'''

# Empty Tuple
t1 = ()

# Multiple types of data
t1 = (1, 2, 3, 4, 5, "Akash", 'A', 123.4)
print(t1)

t1 = 1, 2, 3, 4, 5, 6, 6


# Accessing the tuple elements
t1 = 1, 2, 3, 4, 5, 6
print(t1[3])
print(t1[:])

# list -> tuple
lst = [1, 2, 3, 4, 5]
t2 = (lst)
print(t2)

t3 = tuple(lst)
print(t3)


# Functions to process tuple:
t1 = (1, 2, 3, 4, 5, 6, 6)

print(len(t1))
print(min(t1))
print(max(t1))
print(t1.count(6))
print(t1.index(2))
print(sorted(t1, reverse=True))
print(t1)

'''
We can not perform operations in tuple like:
    -append()
    -extend
    -insert()
    -clear()
over tuple as tuples are immutable in python
'''

# 3. Set
'''
    -{} for set
    -Set is a collection which is unorederd*
    -unchangeable [Immutable]
    -unindexed
    -No duplicate members
        [will automatically be deleted from the set]
'''
setV = {"apple", "banana", "cherry", "apple", 123, 123}
print(setV)

print("__SET__")
t1 = {2, 1, 3, 4, 5, 6, 6}
print(t1)
print(len(t1))
print(min(t1))
print(max(t1))
print(sorted(t1, reverse=True))
print(t1)
# print(t1.count(6))
# print(t1.index(2))

'''
We can not perform these operations in sets like:
    -append()
    -extend()
    -insert()
As sets immutable in python
'''

# 4. Dictionary
'''
-It is a key value pairs
-Dictionary is a collection which is ordered**
-changeable
-No duplicate members
'''

# Dictionary -> Operations
'''
4. Dictionary 
   - adding and removing keys
   - accessing values
   - Replacing values
   - Traversing Dictionaries
'''

thisdict = {
    "brand": "Ford", 
    "model": "Mustang", 
    "year": 1964,
    123: 123.4, 
    'A': 12
    }

print(thisdict)

# Length of the dictionary
print(len(thisdict))

# Dictionary Items
thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964,
    123: 12345,
    'A': 123
}
print(thisdict["brand"])
print(thisdict[123])
print(thisdict['A'])

# Ordered or Unordered?
'''
- When we say that dictionaries are ordered, it means that the items have a defined order, and that order will not change
- Unordered means that the items does not have a defined order, you cannot refer to an item by using an index
- As of Python version 3.7, dictionaries are ordered. In Python 3.6 and earlier, dictionaries are unordered
'''

# Changeable or add a new element into a dictionary
'''Dictionaries are changeable, meaning that we can change
   add or remove items after the dictionary has been 
   created.
'''
#Dictionary Items
car = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}
x = car.keys()
print(x) #before the change
car["color"] = "white" #new value
car["brand"] = "Ford123" # update value

x = car.keys()
print(x)   #after the change

y = car.values()
print(y)


# Duplicates are, Not Allowed
thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964,
    "year": 2021,
    "year": 2022,
    "year": 2023,
    "year": 2024,
    "year": 2025
}
print(thisdict)

# Get Keys and Values
car = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

x = car.keys()
y = car.values()

print(x,y)

# adding and removing keys
thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}
thisdict["color"] = "red"
print(thisdict)

#Removing keys
thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}
thisdict.pop("model")
print(thisdict)

thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}
thisdict.popitem()  # will remove the last item
print(thisdict)

# Traversing Dictionaries
thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}
for x in thisdict:
    print(x)

#Replacing values
thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}
thisdict["brand"]= "Ford123"
print(thisdict)


letters = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPRSTUVWXYZ'

string_letters = str(letters)
lists_letters = list(letters)
tuples_letters = tuple(letters)
sets_letters = set(letters)


print("String: ", string_letters)
print() # for new line
print("Lists: ", lists_letters)
print() # for new line
print("Tuples: ", tuples_letters)
print() # for new line
print("Sets: ", sets_letters)