#Exception Handling In Python
'''
# Exception, Error, Compilation Issues
1. Compilation Issues:
    - Syntax Issues, or issues in the code catch by the python compiler

2. Exception:
    - Issues in code, catch by PVM [Python Virtual Machine]
    - Run time issues, Handle [PVM]
    a = 10
    b = 0
    print(a/b)
    - Exceptions are always handled ny the programmer

3. Errors:
    - Can not be handled by the programmer
    - Happen at run time
    - Even PVM can not catch them
    - System Design should be robust and efficient

'''
#1
path = 'C:\Users\Dell 5000\python workspace\unit 3'

try:
    #Write suspicious code here!
    f = open(path + "abc.txt", 'w')
    a = int(input("Enter a: "))
    b = int(input("Enter b: "))
    c = a/b
    f.write("write %d into my file " %c)

except ZeroDivisionError:
    # This block of code only runs when exception
    print("Divison by zero happened, so don't enter zero as input")

finally:
  # This block of code will always run
  f.close()
  print("file is closed now")