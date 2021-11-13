from collections import defaultdict

class Kruskal:
    def __init__(self):
        self.adj=defaultdict(list)

    def addEdge(self,u,v,w):
        self.adj[u].append((v,w))
        self.adj[v].append((u,w))


def main():
    file=input()
    edges=open('DS and Algo\Graphs\Python\{}'.format(file),'r').readlines()
    k=Kruskal()
    for edge in edges:
        u,v,w=map(int,edge.strip().split(','))
        k.addEdge(u,v,w)


if __name__=='__main__':
    main()