m=[]
n=[]
s=int(input("Starting point of sam's house: "))
t=int(input("Ending point of sam's house: "))
a=int(input("Location of apple tree: "))
b=int(input("Location of orange tree: "))
x=int(input("No. of apples: "))
y=int(input("No. of oranges: "))
for i in range(x):
    m.append(int(input()))
for j in range(y):
    n.append(int(input()))
count1=0
count2=0
for i in range(x):
    sum1=0
    sum1=a+m[i]
    if (sum1>=s and sum1<=t):
        count1=count1+1        
for j in range(y):
    sum2=0
    sum2=b+n[j]
    if(sum2>=s and sum2<=t):
        count2=count2+1
print(count1,count2)        