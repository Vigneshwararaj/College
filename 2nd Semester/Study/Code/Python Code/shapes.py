for row in range (0,6):
    for col in range(0,7):
        if(row==0 and (col!=0 and col!=3 and col!=6))or ((row==1 or row==5) and col==3) or ((col==0 or col==6)and (row!=0 and row!=3 and row!=4 and row!=5)) or ((col==1 or col==5) and row==3) or ((col==2 or col==4)and row==4):
            print("*",end="")
        else:
            print(end=" ")
    print()          