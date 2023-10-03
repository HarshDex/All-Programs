f = open("A:\\c++\\problems\\pythonPractice\sample.txt",'a')
print('file created successfully\n')
a = input('enter the data which you want to write in the file : ')
f.write(a)
print('data written successfully')
f = open("A:\\c++\\problems\\pythonPractice\sample.txt",'r')
print("reading the data from the file : ")
a = f.readlines()
for i in a : 
    print(i)
    
#if we have a code which is buggy then we use handling techniques like try and catch which is known as exception handling

try : 
    f = open('A:\\c++\\problems\\pythonPractice\sample.txt','r')
    print('reading from the file!!')
    print(f.readlines())
except : 
    print("file not found please create a file first !!!")
else:
    print("file closed successfully !!")
