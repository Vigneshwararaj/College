#include<stdio.h>
void sum(long long int a[100],int b);
int main(){
    long long int arr[100];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    sum(arr,n);
    return 0;
}
void sum(long long int a[100],int b){
    int i;
   long long int sum=0;
    for(i=0;i<b;i++){
        sum=sum+a[i];
    }
    printf("%lld",sum);
}