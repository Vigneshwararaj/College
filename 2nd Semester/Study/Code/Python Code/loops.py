x=int(input())
y=int(input())
while x>0:
    if y%2==0:
        print(y)
        x=x-1
        continue
    if y%2!=0:
        print(y)
        break
