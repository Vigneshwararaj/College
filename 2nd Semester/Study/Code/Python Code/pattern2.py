n=int(input())
a=n-1
for row in range(0,n):
    for col in range(0,a):
        print(end=" ")
    a=a-1
    for col in range(0,row+1):
        print("#",end="")    
    print()    
    