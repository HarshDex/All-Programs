# Note
"""
     A regEx or regular expression , is a sequence of characters that forms a search pattern
    ~ Regex can be used to check if string contains the specified search pattern 
    ~ python has a built in package called re,which can be used to work with regular expressions.
"""
txt = "The rain in Spain"
x = txt.find("ai") # this is not a regex function but a string function 
print(x)

x = txt.find("ai",7)
print(x)

#import the remodule: 
import re
txt = " The rain in Spain "
x = re.findall("ai",txt)   #findall returns all the instances of the substring 
print(x)

#searching 
y = re.search("rain",txt)
print(y)
print(y.span())
print(y.group())
print(y.start())
print(y.end())

#split a statement, based on a single space
txt = "the rain in spain"
x= re.split("\s",txt) #this will return a list of words 
print(x)

#controll the number of occurencees by specifying the maxsplit paragraph
txt = "the rain in spain"
x = re.split("\s",txt,2)[1]
print(x)

#the sub() fuction replaces the matches with the text of your choise 
txt = "the rain in spain"
x = re.sub("\s","_",txt)
print(x)

#match object in regEx
txt = "the rain in spain"
x = re.search("ai",txt)
print(x)
print(type(x))     #<re.Match object; span=(5, 7), match='ai'>
print(x.span())    #returns the span of the word/character
print(x.group())   #actual words/set .from the result
print(x.start())   #will search from the start
print(x.end())     #will search from the end


#Match objects
'''
- a match objects is an object containing information about the search and the result.
- if there is no match i, the value None will be returned , instead of the match object =.
'''
# Q1->find the username/host or domain name from thext probided 
# 1 . find apporoach (string functions):
data = "From hs682340@gmail.com 12-12-2002 09:14:16"
print(re.search("@.*",data).group().split()[0])

#first approach

#extract date from a string 
# import re
txt = " I have submitted muy report to the department on 12-12-2022,12122022"
x = re.search("([0-9]{2}-[0-9]{2}\-[0-9]{4})",txt)
print(x.group())

#return all the words of a string that starts for the vowel
txt = " I have submitted muy report to the department on 12-12-2022,12122022"
print(re.findall(r"\b^[aeiouAEIOU]\w*",txt))


