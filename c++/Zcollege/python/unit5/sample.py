#Q1.
'''
- WAP in python to check if the entered number is prime or not
  using command line argument technique

  Also use square root technique to check if it is prime or not!
'''
import sys
# x = int(input("Enter a number -> "))
# n = len(sys.argv)
x = sys.argv[0]
for i in range(2,x//2):
    if x%i == 0:
        count = count+1

if count == 0 :
    print("Number is prime")
else:
    print("Number not prime")