largest = None
smallest = None
s=[]
while True:
    number=input('Enter a no.')
    if number=='done':
        break
    else:
        s.append(int(number))
        continue  
for i in (s):
    if largest is None:
        largest=i
    elif i>largest:
        largest=i
    if smallest is None:
        smallest=i
    elif i<smallest:
        smallest=i    
print("Maximum is",largest)
print("Minimum is",smallest)                     