turn=int(input())
cnt=0
for i in range(turn):
    x,y=map(int,input().split())
    if x==y:
        cnt=cnt+1
        if cnt >= 3:
            print("Yes")
            exit()

    else:
       cnt=0

print("No")
