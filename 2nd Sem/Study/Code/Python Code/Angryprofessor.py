a=[]
s=int(input("Strength of the class: "))
t=int(input("Threshold value: "))
for i in range(s):
   a.append(int(input()))
count=0   
for i in range(s):
   if a[i]<=0:
      count=count+1
if count==t:
   print("No the class isn't cancelled")
else:
   print("Yes the class is cancelled")   