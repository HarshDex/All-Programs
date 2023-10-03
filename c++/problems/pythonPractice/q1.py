# regular expression
import re #this module contains all the functions which are usefull for the regular expression operations
print(r"/this is a raw\nstring")
print("this is the alternative method of printing \\n regular expression  ")
prog = re.compile(r'c\w\w\w\w\w')

str = 'cat mat bat rat'  #this is the string where regular expression will act
result = prog.search(str)
print(result)

str1 = 'she is a caring mother'
res = prog.search(str1)
print(res.group())

s = 'hello my name is harsh vardhan shah '
print(re.search(r'm\w',s))
result = re.search(r'h\w\w\w\w',s)
print(result.group())

#if we want that we want all the characters that are matching than we use findall() operation
str = 'hat har hel harsh vardhan shah hut'
res = re.findall(r'h\w\w',str)
print(res)  #this will give me the list containing all the words that are matched by my regular expression
# for s in res:
#     print(s)

#here we have another function match it gives the output only if the expression matches the first word of the string
str = 'hel my name is harsh vardhan shah'
res = re.match(r'h\w\w',str)
print(res)  #this will give me hel 
#if we do not find the match of our regular expression then we will get none as output


#there is a split method which is used to split the string into two halfs according to our regular expression 
#suppose we have re.split(r'\W',str) here W reps any non alphanumeric character and + after W reps the 1 or more occurance indicated by the W.
import re
str = 'hello my : name is "harsh" vardhan shah ; iam from dharchula'
result = re.split(r'\W+',str)
result = re.split(r'\W',str)
print(result)

#suppose i have a string and i want to replace a specific word we can use sub method
str = 'i have completed my homework tomorrow'
result = re.sub(r'tomorrow','today',str)
print(result)


#question - retrieve all the words starting with 'a'
str = 'an apple a day keeps the doctor away'
result = re.findall(r'\ba[\w]*\b',str)
print(result)

#question - retrieve all the words starting with a numberic digit
str = 'this is the 1string which 6contain all the words 12 string12 with a 5252numberic digit'
result = re.findall(r'\b\d[\w]*\b',str)
print(result)

#if we want that our result must only contain those word whose lenght is specific then we use {}
str = 'hello my name is harsh vardhan shah'
result = re.findall(r'\b\w{5}\b',str)
print(result)

result = re.search(r'\w{5}',str)
print(result.group())

#if we want to find any word having atleast n digits
import re
str = 'one two three four five six seven eight nine ten'
result = re.findall(r'\b\w{4,}\b',str)
print(result)

#if we want to find the words which are within specific boundaries 
import re
str = "hello buddy what is your name "
res = re.findall(r'\b\w{1,4}\b',str)
print(res)

# if we are using [\A] this indicates that match the character from begin and if we are using[\Z] then it mean match the character from end

str ='to this is merely the example of the above statement thank to'
result = re.findall(r't[\w]\Z',str)
print(result)

# question - write a python program to find all the words starting with ha or he
str = 'hello my name harsh and he  haae ghat jgho ats har '
result = re.findall(r'\bh[ea][\w]*\b',str)
print(result)

#if we want to find all the occurance of date in the given string then we can eaisly find it by using the regular expression 

str = 'hello my name is harsh vardhan shah  and my date of birth is 05-11-2001 thankyou'
result = re.findall(r'\d{2}-\d{2}-\d{4}',str)
print(result)
 
str = 'hello my name is harsh vardhan shah'
result = re.findall(r'\bh[\w*]{5}\b',str)
print(result)