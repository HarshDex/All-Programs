# program to find all the words ending with a vowel character 
import re
str = input('enter the string : ')
res = re.split(r'\W+',str)
l = []
index = 0
for i in res :
    result = re.search(r'[aeiou]$',i)
    if result : 
        l.insert(index,i)
        index = index+1
    
for i in l:
    print(i)
    
    
#how to fetch email adress of any indivisual
str = 'hello my name is Harsh vardhan shah and i am from graphic era hill university my email adress his harshshsah@gmail.com'
result = re.findall(r'\S+@\S+',str)
print(result)


