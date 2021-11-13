x=int(input())
a=[]
for i in range(x):
    a.append(int(input()))
for i in range(x):
    for j in range(x-i-1):
        if a[j]<a[j+1]:
            temp=a[j]
            a[j]=a[j+1]
            a[j+1]=temp
print(a)            