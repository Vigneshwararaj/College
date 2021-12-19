#include <stdio.h>
int main(){
    int a[10],i,j,n,x,b[10],k,swap;
    printf("ENTER THE SIZE OF ARRAY");
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-2;j++){
         if(a[i]<a[j+1]){
             swap=a[i];
             a[i]=a[j];
             a[j]=swap;
         }   
        }
    }
    x=0;
    for(i=0;i<n;i++){
        x=x+a[i];
        k=0;
        for(j=i+1;j<n;j++){
            k=k+a[j];
        }
        if (x>k)
        {
            printf("No. of elements is %d" ,i+1);
            break;
        }
        

    }
}