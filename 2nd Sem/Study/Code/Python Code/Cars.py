x=int(input())
c=[]
for i in range(0,x):
    c.append(int(input()))
c.sort(reverse=True)    
count=0
i=0
while i<x:
    count=count+c[i]
    c.remove(c[i])
    x=len(c)
    for i in range(0,x):
        if c[i]>0:
            c[i]=c[i]-1
    i=0
print(count)        