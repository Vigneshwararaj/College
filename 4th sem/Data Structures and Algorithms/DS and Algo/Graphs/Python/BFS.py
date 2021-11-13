from collections import defaultdict
import sys
class BFS():
    def __init__(self):
        self.queue=[]# Queue data structure to store the nodes which we are visiting.
        self.adj=defaultdict(list)# adjacent list using default dict and list
        self.visited=[False for i in range (200)]# To mark all visited nodes
        self.result=[]# To store the result 

    def addEdge(self,u,v):
        self.adj[u].append(v)
        self.adj[v].append(u)

    def bfs(self,start):
        self.queue.append(start) # enqueue the start node to the queue
        self.result.append(start)# as start node is a part of BFS
        self.visited[start]=True# mark the start node as visited
        while len(self.queue) !=0:
            u=self.queue.pop(0)# we take the start node and visit all neighbours so dequeue 
            it=self.adj[u]
            for key in it:
                if(self.visited[key]!=True):
                    self.visited[key]=True
                    self.queue.append(key)
                    self.result.append(key)
                    ''' if the node is not visited then enqueue it in queue and mark those nodes as visited and append it to execute_result
                    then dequeuen the top element in queue and visit its neighbours and repeat until queue is empty
                    '''

    def printList(self):
        print(self.result)


def main():
    b=BFS()
    file=input()
    vertices=open('DS and Algo\Graphs\Python\{}'.format(file),'r').readlines()
    for vertice in vertices:
        u,v=map(int,vertice.strip().split(' '))
        b.addEdge(u,v)

    start=int(input())
    b.bfs(start)  
    b.printList()

if __name__=='__main__':
    main()             
