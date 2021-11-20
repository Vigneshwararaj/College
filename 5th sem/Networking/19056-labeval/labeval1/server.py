import socket
import random
import pandas as pd
import numpy as np
import string

from pandas.core.indexes.base import Index
host=socket.gethostname()
port=19008

s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

data=pd.DataFrame(pd.read_csv('toll.csv'))
data.set_index(['Vehicle-no.','Location','Time','Amount','Way','Highway'])

data=pd.DataFrame(pd.read_csv('menu.csv'))
data.set_index(['Date','foodid','Category','Quantity','cost','Totalcost'])



def serverBrain(clientsocket,addr,host,data):
    ques=clientsocket.recv(1024).decode()
    print(ques," \nConnected to client")
    ques='Operations :\n 1. View File\n 2.Insert into File\n 3. Modify File\n 4. Update File'
    clientsocket.send(ques.encode())
    ans=clientsocket.recv(1024).decode()
    intAns=int(ans)
    if(intAns==1):
        dataString=data.to_string()
        clientsocket.send(dataString.encode())
    elif(intAns==2):
        ins=[]
        enterData="Enter Date: "
        clientsocket.send(enterData.encode())
        date=clientsocket.recv(1024).decode()
        ins.append(date)

        enterData="Enter Food ID: "
        clientsocket.send(enterData.encode())
        foodid=clientsocket.recv(1024).decode()
        ins.append(foodid)

        if(foodid[0]=="D"):
            ins.append("Dosa")
        elif(foodid[0]=="A"):
            ins.append("Apple")
        elif(foodid[0]=="B"):
            ins.append("Biriyani")
        elif(foodid[0]=="M"):
            ins.append("Mexican")
        
        enterData="Enter Quantity: "
        clientsocket.send(enterData.encode())
        Quantity=clientsocket.recv(1024).decode()
        ins.append(Quantity)

        enterData="Enter cost: "
        clientsocket.send(enterData.encode())
        cost=clientsocket.recv(1024).decode()
        ins.append(cost)

        qty=int(Quantity)
        cst=int(cost)
        total=qty*cst
        ins.append(total)

        n=len(data)
        print(ins)
        data.loc[n]=ins
        i=data.to_string()
        clientsocket.send(i.encode())
        data.to_csv('menu.csv',index=False)

    elif(intAns==3):
        data["TotalCost"]=data['Quantity']*data["cost"]
        data.to_csv("menu.csv",index=False)
        str=data.to_string()
        clientsocket.send(str.encode())  

    elif(intAns==4):
        for i in range(len(data)):
            catCol=data.loc[i,'foodid'][0]
            if(catCol=='A'):
                data.loc[i,'Category']="Apple"
            elif(catCol=='D'):
                data.loc[i,"Category"]="Dosa"
            elif(catCol=='M'):
                data.loc[i,"Category"]="Mexican"
            elif(catCol=='B'):
                data.loc[i,"Category"]="Biriyani"

    else:
        errorMsg="Wrong Option! Please Select any of the above options only"
        clientsocket.send(errorMsg.encode())
    clientsocket.close()
def initiate():
    print("--------------Server Listening---------------------")
    print('--------------Waiting for client programs----------\n')
    s.bind((host,port))
    s.listen(5)
    x=True
    while(x):
        c,addr=s.accept()
        serverBrain(c,addr,host,data)
        ch=input("\nDo You want to continue(y/n): ")
        if(ch=='y'):
            pass
        else:
            x=False
print('----------------Server Initiated !-----------------')
initiate()
