from collections import defaultdict
def smallestWindow(s, p):
    n = len(s)
    if n < len(p):
        return -1
    arr = [0]*256
     
    start = 0
     
    ans = n + 1
    count = 0
     
    for i in p:
        arr[ord(i)] += 1
        if arr[ord(i)] == 1:
            count += 1
                   
    j = 0
    i = 0
     
    while(j < n):
       
        arr[ord(s[j])] -= 1
        if arr[ord(s[j])] == 0:
            count -= 1
             
            while count == 0:
                if ans > j - i + 1:
                   
                    ans = j - i + 1
                    start = i
                     
                arr[ord(s[i])] += 1
                if arr[ord(s[i])] > 0:
                    count += 1
                i += 1
        j += 1
    if ans > n:
        return "-1"
    return s[start:start+ans],ans
 
if __name__ == "__main__":
    n=int(input())
    s = "ADOBECODEBDCDDBBANC"
    a=[]
    l=[]
    d=defaultdict()
    for i in range(n-1):
        p=input()
        result ,length = smallestWindow(s, p)
        l.append(result)

    l.sort()
    print(l)
