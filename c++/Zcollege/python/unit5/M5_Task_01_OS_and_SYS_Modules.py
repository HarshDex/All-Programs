# OS and SYS Modules

import os
import sys

# Get the current working directory (CWD)
cwd = os.getcwd()
print("Current working directory:", cwd)

# # changing the current working directory
# def current_path():
#     print("Current working directory before")
#     print(os.getcwd())
#     print()

# current_path()
# # Changing the CWD
# os.chdir('../')
# # Printing CWD after change
# current_path()


# # Make your own directory
# # Directory
# directory = "akash"
# parent_dir = os.getcwd()
# path = os.path.join(parent_dir,directory)

# Remove a file

# file = "abc.txt"
# path = os.path.join(parent_dir, file)
# os.remove(path)

# Removing Dir. [Don't run in Source Code folder]
# directory = ""
# path = os.path.join(parent_dir, directory)
# os.rmdir(path)

#########SYS MODULE#############
'''
The sys module in Python provides various functions and variables that are used
to manipulate different parts of the Python runtime environment.

- sys.version is used which returns a string conatining the version of Python 
Interpreter with some additional information.
- This shows how the sys module interacts with the interpreter.
'''
import sys
print(sys.version)

#Input and output using sys
'''
#stdin:
- It can be used to get input from the command line directly
- It, also, automatically adds '\n' after each sentence
'''
for line in sys.stdin:
    if 'q' == line.rstrip():
        break;
    print(f'Input : {line}')

print("Exit")

#stdout:
'''
- A built-in file object that is analogous to the interpreter's
  standard output stream in Python
- stdout is used to display output directly to the screen
   console.
'''
import sys
sys.stdout.write('Akash Chauhan')
sys.stdout.write('Akash Chauhan')
sys.stdout.write('Akash Chauhan')
sys.stdout.write('Akash Chauhan')
sys.stdout.write('Akash Chauhan')
sys.stdout.write('Akash Chauhan')
sys.stdout.write('Akash Chauhan')

print("Akash Chauhan", end = "")
print("Akash Chauhan", end = "")

# sys.argv:
'''
# sys.argv: command line arguments:
- Command-line arguments are those which are passed during the calling 
of the program along with the calling statement.
'''
import sys

#total arguments
n = len(sys.argv)
print("Total arguments passed:", n)

# Arguments passed
print("\nName of Python script:", sys.argv[0])

print("\nArguments passed:",end = " ")
for i in range(1 , n):
    print(sys.argv[i], end = " ")

# Addition of numbers
Sum = 0

for i in range(1 , n+1):
    Sum += int(sys.argv[i])

print("\n\nResult:", Sum)

# end = " "
'''
By default, the print function end swith a new line ,
Passing the whitespace to the end parameter (end=' ') indicates
that the end character has to be identified by whitespace and 
not a newline
'''

#Q1.
'''
- WAP in python to check if the entered number is prime or not
  using command line argument technique

  Also use square root technique to check if it is prime or not!
'''

