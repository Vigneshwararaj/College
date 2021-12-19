#include<stdio.h>
int main(){
   int a[100],i,n,k,count;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   scanf("%d",&k);
   a[0]=k;
   count=0;
   for(i=0;i<n;i++)
   {
       if(a[i]=k||a[i]<k)
       {
           count=count+1;
       }
       else
       {
           printf("false");
           break;
       }
       k=k+1;
   }
    if(count=n){
        printf("True");
    }
}