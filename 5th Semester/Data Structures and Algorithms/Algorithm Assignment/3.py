def KMP(s1,s2):
    txt=s1+s2
    m=len(s1)
    n=len(s2)
    lps=[0]*10000
    lps[m]=0
    l=0
    k=1
    while(k<m):
        if s2[k]==s2[l]:
            l=l+1
            lps[k]=1
            k=k+1
        elif l!=0:
            l=lps[l-1]
        else:
            lps[k]=0
            k+=1
    i=0
    j=0 
    while i<n:
        if s2[j]==txt[i]:
            i=i+1
            j=j+1
        if j==m:
             return True
        elif i<n and s2[j]!=txt[i]:
            if j!=0:
                j=lps[j-1]
        else:
            i=i+1
    return False  

def main():
    s1=input()
    s2=input()   
    print(KMP(s1,s2))

if __name__=="__main__":
    main()                                  