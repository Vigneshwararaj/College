# Using recurssion (Stack method)
from collections import defaultdict
import sys
class DFS():
    def __init__(self):
        self.adj=defaultdict(list) #adjacent list using default dict and list
        self.visited=[False for i in range (200)] #To mark all visited nodes
        self.result=[] #To store the result

    def addEdge(self,u,v):
        self.adj[u].append(v)
        self.adj[v].append(u)

    def dfs(self,start):
        self.visited[start] = True # Mark the starting vertex as true
        self.result.append(start) # append the start vertex to result as it is a part of DFS
        it=self.adj[start]
        for keys in it:
            if self.visited[keys]!=True:
                self.dfs(keys)
        ''' 
        if the nodes are not visited then the non visited node will become start and the process will repeat until
        until it comes to end of graph and then recurssively it explores all the previous nodes to check for unexplored nodes 
        '''        

    def printList(self):
        print(self.result)


def main():
    d=DFS()
    file=input()
    vertices=open('DS and Algo\Graphs\Python\{}'.format(file),'r').readlines()
    for vertice in vertices:
        u,v=map(int,vertice.strip().split(' '))
        d.addEdge(u,v)

    start=int(input())
    d.dfs(start)  
    d.printList()

if __name__=='__main__':
    main()                     



