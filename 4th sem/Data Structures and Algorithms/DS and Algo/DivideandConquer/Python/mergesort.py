def Merge(a,l,mid,h):
    l=[]



def Mergesort(a):
    l=0
    r=len(a)
    if(l<r):
        mid=l+((r-l)/2)
        Mergesort(a,l,mid)
        Mergesort(a,mid+1,r)
        Merge(a,l,mid,r)



def main():
    s=input()
    l=list(map(int,s.split()))
    Mergesort(l)

if __name__=='__main__':
    main()    