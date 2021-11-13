#include <stdio.h>
int main(){
    int a[10],i,j,n,x,b[10],k;
    printf("ENTER THE SIZE OF ARRAY");
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("enter the position and value to be inserted");
    scanf("%d""%d",&k,&x);
    k=k-1;
    for(i=0;i<n;i++){
        if(i==k){
            b[i]=x;
            b[i+1]=a[i];
        }
        else if(b[i]==a[i-1]){
            b[i+1]=a[i];
        }
        else{
            b[i]=a[i];
        }
        
    }
    n=n+1;
    for(i=0;i<n;i++){
        printf("%d",b[i]);
    }
    return 0;
}