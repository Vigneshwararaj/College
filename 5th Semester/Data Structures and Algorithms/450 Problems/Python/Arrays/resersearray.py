def reversearray(l,start,end):
    if start<end:
        l[start],l[end]=l[end],l[start]
        reversearray(l,start+1,end-1)


def main():
    s=input()
    l=list(map(int,s.split(' ')))
    n=len(l)
    start=0
    reversearray(l,start,n-1)
    print(l)

if __name__=='__main__':
    main()