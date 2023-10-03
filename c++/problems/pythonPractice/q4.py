f = open('A:\\c++\\problems\\pythonPractice\sam.txt','r')
a = f.readlines()
for i in a: 
    print(i)
    i.split()
    for e in i : 
        print(e)
        
#creating seak function 
f.seek(40)
a = f.readlines()
for i in a :
    print(i)
    
n = f.tell()
print(n)


#deleting a record from the file 
 
import os
if os.path.exists('A:\\c++\\problems\\pythonPractice\sample.txt'):
    os.remove('A:\\c++\\problems\\pythonPractice\sample.txt')
else:
    print("file does not exist")