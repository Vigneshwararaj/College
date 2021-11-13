#include<stdio.h>
int main(){
    int a[1000],n,i,t,count;
    scanf("%d",&n);
    scanf("%d",&t);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    count=0;
    for(i=0;i<n;i++){
        if(a[i]<=0){
            count=count+1;
        }
    }
    if(count==t){
        printf("No, the class is not cancelled");
    }
    else{
        printf("Yes,the class is cancelled");
    }
}