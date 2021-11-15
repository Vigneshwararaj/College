def dyn(wt,w,profit):
    n=len(wt)
    dp=[[0 for i in range(w+1)] for j in range(n+1)]
    for i in range(n+1):
        for j in range(w+1):
            if i==0 or j==0:
                dp[i][j]=0
            if wt[i-1]>j:
                dp[i][j]=dp[i-1][j]
            else:
                dp[i][j]=max(dp[i-1][j],profit[i-1]+dp[i-1][j-wt[i-1]])
    return dp[n][w]                    

def main():
    totalweight=int(input())
    weights=list(map(int,input().rstrip().split(' ')))
    profit=list(map(int,input().rstrip().split(' ')))
    print(dyn(weights,totalweight,profit))

if __name__ == '__main__':
    main()