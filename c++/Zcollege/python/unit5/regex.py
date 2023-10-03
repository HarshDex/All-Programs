import re
str = 'hello my name is Harsh Vardhan Shah and my cell phone number is 7060701692 thankyou '
res = re.search(r'\bH[\w]+\b',str)
r = re.search(r'\bV[\w]+\b',str)
rs = re.search(r'\bS[\w]+\b',str)
result = re.search(r'\d{10}',str)
print(res.group())
print(r.group())
print(rs.group())
print(result.group())

# fetching single word from the string 
str = 'hello my name is Harsh Vardhan Shah'
result = re.findall(r'H[\w]{5}\bV[\w]{7}\bS[\w]{4}',str)
print(result)

print("we can also fetch data from the file as shown below")
with open("A:\\c++\\problems\\pythonPractice\sam.txt") as f:
    for i in f:
        print(i);
        
print('changing the file info')
# replacing my name 

f = open('A:\\c++\\problems\\pythonPractice\sam.txt','r')
res = []
for l in f:
    res = re.findall(r'\bh[\w]*\b',str)

for i in res :
    print(i)