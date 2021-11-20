import threading
import socket

sck=socket.socket()
host=socket.gethostname()
port=19008

sck.connect((host,port))
print(sck.recv(1024).decode())
sck.send(bytes("-----Client Initiated-----","utf-8"))

print(sck.recv(1024).decode())
ch=input()
if(ch=="1"):
    sck.send(bytes(ch,"utf-8"))
    rply=sck.recv(1024).decode()
    print(rply)

    ch=input()
    if(ch=="1"):
        sck.send(bytes(ch,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        vno=input()
        sck.send(bytes(vno,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        loc=input()
        sck.send(bytes(loc,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        t=input()
        sck.send(bytes(t,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        a=input()
        sck.send(bytes(a,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        w=input()
        sck.send(bytes(w,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        hw=input()
        sck.send(bytes(hw,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)   

    elif(ch=="2"):
        sck.send(bytes(ch,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

    elif(ch=="3"):
        sck.send(bytes(ch,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)


elif(ch=='2'):
    sck.send(bytes(ch,"utf-8"))
    rply=sck.recv(1024).decode()
    print(rply)

    ch=input()
    if(ch=="1"):
        sck.send(bytes(ch,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        vno=input()
        sck.send(bytes(vno,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        te=input()
        sck.send(bytes(te,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        tex=input()
        sck.send(bytes(tex,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        loc=input()
        sck.send(bytes(loc,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        de=input()
        sck.send(bytes(de,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

        dex=input()
        sck.send(bytes(dex,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply)

    elif(ch=="2"):
        sck.send(bytes(ch,"utf-8"))
        rply=sck.recv(1024).decode()
        print(rply) 

    elif(ch=="3"):
        sck.send(bytes(ch,"utf-8"))
        rply=sck.recv(1024).decode()
        rply1=sck.recv(1024).decode()
        rply2=sck.recv(1024).decode()
        rply3=sck.recv(1024).decode()
        print(rply ,'\n',rply1,'\n',rply2,'\n',rply3)           

        

else:
    pass


sck.close()

