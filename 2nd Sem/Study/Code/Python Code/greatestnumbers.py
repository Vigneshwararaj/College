x=int(input("Enter the 1st no.: "))
y=int(input("Enter the 2nd no.: "))
z=int(input("Enter the 3rd no.: "))
if x>z:
    if x>y:
        print("x is greater")
    else:
        print("y is greater")    
elif y>z:
    print("y is greater")
else:
    print("z is greater")           