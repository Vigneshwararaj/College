#include<stdio.h>
int main(){
    int a[10],b[10],m,n,i,j,count,count2;
    printf("Enter the size of 2 arrays");
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        scanf("%d",&b[i]);
    }
    count=0;
    count2=0;
    if(m==n){
        for(i=0;i<n;i++){
            if(a[i]>b[i]){
                count=count+1;
            }
            else if(b[i]>a[i]){
                count2=count2+1;
            }
            else{
                count=count+0;
                count2=count2+0;
            }
        }
        printf("%d",count);
    printf("%d",count2);
    }
    else{
        printf("Error");
    }
    
    return 0;

}