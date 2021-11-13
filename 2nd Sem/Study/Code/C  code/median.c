#include<stdio.h>
int main(){
    int a[100000],i,j,n,temp,count;
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
   for(i=n/2;i<=n/2;i++){
       printf("%d",a[i]);
   }
   return 0;
}
