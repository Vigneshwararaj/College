for row in range (0,5):
    for col in range (0,8):
        if (row==0 and (col!=3 and col!=5 and col!=6)) or (row==2 and (col!=3 and col!=5 and col!=6)) or (row==3 and (col==2 and col==4 and col==7)) or (row==4 and col!=3) or (row==1 and col==0) or (row==1 and col==4) or (row==1 and col==7) or (row==3 and col==2) or (row==3 and col==4) or (row==3 and col==7):
            print("*",end="")
        else:
            print(end=" ")
    print()            