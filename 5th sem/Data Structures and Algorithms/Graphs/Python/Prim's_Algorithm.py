from collections import defaultdict
import heapq as hq

class Prim:
    def __init__(self):
        self.adj=defaultdict(list)
        self.parent=[-1 for i in range(200)]
        self.heap=[]
        self.mst=[False for i in range(200)]
        self.key=[2147483647 for i in range(200)]

    def addEdge(self,u,v,w):
        self.adj[u].append((v,w))
        self.adj[v].append((u,w))

    def prim(self):
        self.parent[0]=-1
        self.key[0]=0
        self.heap.append((0,0))
        hq.heapify(self.heap)
        while(len(self.heap))!=0:
            u=hq.heappop(self.heap)[1]
            self.mst[u]=True
            it=self.adj[u]
            for keys in it:
                v=keys[0]
                w= keys[1]
                if((self.mst[v]==False) and (w<self.key[v])):
                    self.key[v]=w
                    self.heap.append((self.key[v],v))
                    hq.heapify(self.heap)
                    self.parent[v]=u

    def printlist(self):
        for i in range(1,len(self.adj)):
            print(self.parent[i],i)                

def main():
    p=Prim()
    file=input()
    vertices=open('DS and Algo\Graphs\Python\{}'.format(file),'r').readlines()
    for vertice in vertices:
        u,v,w=map(int,vertice.strip().split(','))
        p.addEdge(u,v,w)

    p.prim()  
    p.printlist()

if __name__=='__main__':
    main()                     


