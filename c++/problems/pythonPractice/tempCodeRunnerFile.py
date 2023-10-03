import re
str = 'hello my : name is "harsh" vardhan shah ; iam from dharchula'
result = re.split(r'\W+',str)
result = re.split(r'\W',str)
print(result)