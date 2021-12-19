#include <stdio.h>
int main()
{
    int a[10],i,j,n,first,last,mid,x,swap;
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
    printf("ENTER THE NO. TO BE SEARCHED");
    scanf("%d",&x);
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last){
        if(a[mid]<x){
            first=mid+1;
             mid=(first+last)/2;
        }
        else if (a[mid]==x)
        {
         printf("THE ELEMENT %d is found at %d",x,mid+1);   
         break;
        }

        else{
            last=mid-1;

            mid=(first+last)/2;

        }
        if(first>last){
            printf("The element is not found");
        }
    }
    return 0;
}