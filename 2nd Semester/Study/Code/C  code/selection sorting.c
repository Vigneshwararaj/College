#include <stdio.h>
int main(){
    int a[10],i,j,n,swap;
    printf("ENTER THE SIZE OF ARRAY");
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
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
    printf("THE SORTED ARRAY IS ");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}