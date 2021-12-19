#include <stdio.h>
int main()
{
    int a[10],b[10];
    int c,d,i,n,flag;
    c=0;
    d=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("enter the nos in first array\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter the nos in 2nd array\n");
for(i=0;i<n;i++){
    scanf("%d",&b[i]);
}
for(i=0;i<n;i++){
    if(a[i]>b[i]){
        c=c+1;
    }
    else{
        d=d+1;
    }
}
printf("The output is %d"",%d\n",c,d);
return 0;
}