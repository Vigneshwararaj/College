class kmp:
    def checkKMP(self,s1,s2):
        txt=s1 + s1
        m = len(s2)
        n = len(txt)
        lps=[0]*m
        

        l=0
        k=1

        while (k < m):
            
            if (s2[k] == s2[l]):
                l=l+1
                lps[k] = 1
                k+=1
            
            elif (l != 0):
                l=lps[l-1]
                
            else:
                lps[k] = 0
                k+=1


        i = 0
        j = 0
        
        while (i<n):
            
            if (s2[j]==txt[i]):
                i+=1
                j+=1

            
            if (j==m):
                return True

            elif ((i<n) and (s2[j]!=txt[i])):
                if (j!=0):
                    
                    j=lps[j-1]
                    
                else:
                    i+=1
            
            
        return False


if __name__=='__main__':
    st1 = input()
    st2 = input() 
    KMP=kmp()
    if KMP.checkKMP(st1,st2):
        print(True)
        
    else:
        print(False)                  