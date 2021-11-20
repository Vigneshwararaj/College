def Partition(a,l,r):
    pivot=a[r]
    i=l-1
    for j in range(l,r):
        if(a[j]<pivot):
            i=i+1
            a[i],a[j]=a[j],a[i]
    a[i+1],a[r]=a[r],a[i+1]
    return i+1

def Quicksort(a,l,r):
    if(l<r):
        x=Partition(a,l,r)
        Quicksort(a,l,x-1)
        Quicksort(a,x+1,r)

def Print(a):
    print(a)        


def main():
    l=[]
    x=int(input())
    for i in range(0,x):
        l.append(int(input()))

    y=len(l)
    Quicksort(l,0,y-1)
    Print(l)

if __name__=='__main__':
    main()    