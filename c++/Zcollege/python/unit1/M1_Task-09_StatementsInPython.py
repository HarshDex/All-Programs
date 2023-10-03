x=int(input("Please enter an integer: "))

#If else statement
if x<0:
    print('less than zero')
elif x==0:
    print('Zero')
elif x==1:
    print('Single')
else:
    print('More')     


 # For statements [The range() Function]
for i in range(1,6):
    print(i)

x=5
#While loop statement [Values in reverse order]
while(x>=1):
    print(x)
    x=x-1


#break and continue statements, and else clauses on loop

n=8
count=0
for x in range(2,n):
    if n % x == 0:
        print("Not a prime")
        count = count+1
        break
    else:
        continue
if count==0:
    print("It is a prime number")


#The pass statement does nothing
# It can be used when a statement is required syntactically 
# but the program requires no action.

def initlog():
    pass   # Remember to implement this!

initlog()

# while True:
#     pass

#match Statements
cpuModel = str.lower(input("Please enter your CPU model: "))

#The match statement evaluates the variable's value
match cpuModel:
    case "celeron": #We test different values and print different messages
        print("Forget about it and play Minesweeper instead...")
    case "core i3":
        print("Good luck with that ;)") 
    case "core i5":
        print("Yeah,you should be fine,")
    case "core i7":
        print("Have fun!")
    case "core i9":
        print("Our team designed nice loading screens... Too bad you won't see them...")
    case _:
        print("Is that even a thing")

#Short circuit (lazy evaluation) {minimal evaluation}
'''
When evaluating an expression that involves the or operator
Python can sometimes determine the result without evaluating all the operands.
This is called short-circuiting evaluation or lazy evaluation
'''

is_admin = False
is_editor =True
can_edit = is_admin or is_editor

print(can_edit)