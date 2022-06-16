import re
l=int(input())
s=input()
#ptr=re.compile(r"ABC")
#match=ptr.finditer(s)
x=re.findall("ABC",s)
#print(x.count("ABC"))
print(len(x))