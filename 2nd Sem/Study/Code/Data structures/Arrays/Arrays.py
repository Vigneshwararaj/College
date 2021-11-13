import array as arr 
a=arr.array('i',[])
x=int(input())
for i in range(x):
    a.append(int(input()))
print('\r')    
# Inserting a new value at the end        
a.append(4)
x=len(a)
#insert a new value at a specific position
a.insert(2,5)
x=len(a)
for i in range(x):
    print(a[i],end=" ")    