#https://atcoder.jp/contests/abc188/tasks/abc188_a
x,y=map(int,input().split())
a=min(x,y)
b=max(x,y)
if (a+3)>b:
    print("Yes")
else:
    print("No")