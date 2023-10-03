'''
- A RegEx, or Regular Expression, is a sequence of characters that forms a 
 search pattern.
- RegEx can be used to check if a string contains the specified search pattern.
- Python has a built-in package called "re", ehich can be used to work with 
 Regular Expressions.
'''

txt = "The rain in Spain"
x = txt.find("ai") # This is not a RegEx function but a string function
print(x)

x = txt.find("aiI",7)
print(x)


# Import the re module:
import re

txt = "The rain in spain"
x = re.findall("ai", txt)
#findall returns all the instances of the substring as a list that you are trying to find
print(x)

x = re.findall("Portugal", txt)
print(x)
# search for the first white-space character or even a word in the
txt = "The rain in Spain"
# x = re.search("\s", txt)
y = re.search("rain", txt)
print(x)
print(y)
print(type(y))

import re
txt = "The rain in Spain"
# x = re.search("\s", txt)
y = re.search("rain", txt)
#print(x)
print(y)
print(type(y))

print(y.start(), y.end(), y.span())
print(y.group())

# <re.Match object; span=(4, 8), match='rain'>
# <class 're.Match'>