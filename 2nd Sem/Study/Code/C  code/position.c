#include <stdio.h>
int main(){
    int a[10],b[10],c[10],i,j,n,swap;
    printf("ENTER THE SIZE OF ARRAY");
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
         if(a[i]>a[j]){
             swap=a[i];
             a[i]=a[j];
             a[j]=swap;
         }   
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(a[i]==b[j]){
            c[i]=j+1;
        }
        }
    }
        for(i=0;i<n;i++){
            printf("%d",c[i]);
        }

    return 0;
}