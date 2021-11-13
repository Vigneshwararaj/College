def sum(a,b):
    return a+b

def diff(a,b):
    return a-b    

def multiply(a,b):
    return a*b   

def div(a,b):
    return a/b 


while True:
    print("1 for addition")
    print("2 for subraction")
    print("3 for mutiplication")
    print("4 for division")
    option=int(input("Choose an operation to be performed :"))
    if option==1:
        a=int(input('Enter the first no.: '))
        b=int(input(''))
        print("a+b=",sum(a,b))
    if option==2:
        a=int(input('Enter the first no.: '))
        b=int(input(''))
        print("a-b=",diff(a,b))
    if option==3:
        a=int(input('Enter the first no.: '))
        b=int(input(''))
        print("a*b=",multiply(a,b))    
    if option==4:
        a=int(input('Enter the first no.: '))
        b=int(input(''))
        print("a/b= ",int(div(a,b)))    
    if option==5:
        break


