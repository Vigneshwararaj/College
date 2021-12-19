#include<stdio.h>
int main(){
    int a[100],i,j,n,temp,count;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    count=1;
    for(i=0;i<=0;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count=count+1;
            }
        }
    }
    printf("%d",count);
}