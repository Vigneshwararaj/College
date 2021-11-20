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
data1=pd.DataFrame(pd.read_csv('check.csv'))
data1.set_index(['Vehicle','Time Entered','Time Exited','Location','Date Entered','Date Exited'])




def serverBrain(clientsocket,addr,host,data,data1):
    x="--------------Welcome to Highway Control room---------------------"
    clientsocket.send(x.encode())
    ques=clientsocket.recv(1024).decode()
    print(ques," \nConnected to client")
    ques='Choose a department :\n 1. Toll\n 2.Checkpost'
    clientsocket.send(ques.encode())
    ans=clientsocket.recv(1024).decode()
    intAns=int(ans)
    if(intAns==1):
        ques='Select an operation :\n 1.Enter Details  \n2.No of cars passed through each toll \n3. Total amount Collected'
        clientsocket.send(ques.encode())
        ans=clientsocket.recv(1024).decode()
        intAns=int(ans)
        if(intAns==1):
            s=[]
            enterData="Vehicle-no.: "
            clientsocket.send(enterData.encode())
            vehicle=clientsocket.recv(1024).decode()
            s.append(vehicle)

            enterData="Location: "
            clientsocket.send(enterData.encode())
            loc=clientsocket.recv(1024).decode()
            s.append(loc)
            
            enterData="Time: "
            clientsocket.send(enterData.encode())
            tiem=clientsocket.recv(1024).decode()
            s.append(tiem)

            enterData="Amount: "
            clientsocket.send(enterData.encode())
            amt=clientsocket.recv(1024).decode()
            s.append(amt)

            enterData="Way: "
            clientsocket.send(enterData.encode())
            way=clientsocket.recv(1024).decode()
            s.append(way)

            enterData="Highway: "
            clientsocket.send(enterData.encode())
            hw=clientsocket.recv(1024).decode()
            s.append(hw)


            n=len(data)
            data.loc[n]=s
            i=data.to_string()
            clientsocket.send(i.encode())
            data.to_csv('toll.csv',index=False)


        elif(intAns==2):
            x=data['Location'].value_counts()
            x=x.to_string()
            clientsocket.send(bytes(x,"utf-8")) 

        elif(intAns==3):
            x=data['Amount'].sum()
            x=str(x)
            clientsocket.send(bytes(x,"utf-8"))      
                
    elif(intAns==2):
        ques='Select an operation :\n 1.Enter Details \n2. No of cars passed through each checkpoint \n3.no. of people passed through each day'
        clientsocket.send(ques.encode())
        ans=clientsocket.recv(1024).decode()
        intAns=int(ans)
        if(intAns==1):
            u=[]
            enterData="Vehicle-no.: "
            clientsocket.send(enterData.encode())
            vehicle=clientsocket.recv(1024).decode()
            u.append(vehicle)

            enterData="Time Entered: "
            clientsocket.send(enterData.encode())
            te=clientsocket.recv(1024).decode()
            u.append(te)
            
            enterData="Time Exited: "
            clientsocket.send(enterData.encode())
            tex=clientsocket.recv(1024).decode()
            u.append(tex)

            enterData="Location: "
            clientsocket.send(enterData.encode())
            loc=clientsocket.recv(1024).decode()
            u.append(loc)

            enterData="Date Entered: "
            clientsocket.send(enterData.encode())
            de=clientsocket.recv(1024).decode()
            u.append(de)

            enterData="Date Exited: "
            clientsocket.send(enterData.encode())
            dex=clientsocket.recv(1024).decode()
            u.append(dex)


            n=len(data1)
            data1.loc[n]=u
            i=data1.to_string()
            clientsocket.send(i.encode())
            data1.to_csv('check.csv',index=False)

        elif(intAns==2):
            x=data1['Location'].value_counts()
            x=x.to_string()
            clientsocket.send(bytes(x,"utf-8"))  

        elif(intAns==3):
            x=data1['Date Entered'].value_counts()
            y=data1['Date Exited'].value_counts()
            a="No.of people entered during a particular day\n"
            clientsocket.send(a.encode())
            x=x.to_string()
            y=y.to_string()
            clientsocket.send(bytes(x,"utf-8"))
            b="No.of people exited during a particular day\n"
            clientsocket.send(b.encode())
            clientsocket.send(bytes(y,"utf-8"))          


    
    else:
        errorMsg="Wrong Option! Please Select any of the above options only"
        clientsocket.send(errorMsg.encode())
    clientsocket.close()
def initiate():
    s.bind((host,port))
    s.listen(5)
    x=True
    while(x):
        c,addr=s.accept()
        serverBrain(c,addr,host,data,data1)
        ch=input("\nDo You want to continue(y/n): ")
        if(ch=='y'):
            pass
        else:
            x=False
print('----------------Server Initiated !-----------------')
initiate()


