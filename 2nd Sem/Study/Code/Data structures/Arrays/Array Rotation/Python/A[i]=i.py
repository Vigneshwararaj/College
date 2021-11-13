import array as arr
x=int(input())
a=arr.array('i',[])
for  i in range(x):
    a.append(int(input()))
for i in range(x):
    for j in range(x):
        if i==a[j]:
            temp=a[j]
            a[j]=a[i]
            a[i]=temp
for i in range(x):
    print(a[i])            
