try : 
    with open("A:\\c++\\problems\\pythonPractice\sample.txt") as f1:
        with open("A:\\c++\\problems\\pythonPractice\sam.txt",'w') as f2:
            for i in f1:
                f2.write(i)
except:
    print("please create a file first !")
else : 
    print("data copied in another file")
    print("both files are closed ")

print("how to delete a file ??")

import os  #we import os because file is stored in operating system 
if os.path.exists("A:\\c++\\problems\\pythonPractice\del.txt"):
    os.remove('A:\\c++\\problems\\pythonPractice\del.txt')
    print("file deleted successfully ")
else : 
    print("file is not available!!")
    
