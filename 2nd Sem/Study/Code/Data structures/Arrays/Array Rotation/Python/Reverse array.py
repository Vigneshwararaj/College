import array as arr
x=int(input())
a=arr.array('i',[])
for i in range(x):
    a.append(int(input()))
k=len(a)
for i in range(x):
    for j in range(k-1,k-2):
        temp=a[j]
        a[j]=a[i]
        a[i]=temp
    k=k-1